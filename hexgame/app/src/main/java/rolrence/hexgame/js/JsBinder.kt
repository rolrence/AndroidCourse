package rolrence.hexgame.js

import android.app.Activity
import android.util.Log
import android.webkit.WebView
import android.widget.Toast
import rolrence.hexgame.hex.HexMark
import rolrence.hexgame.hex.LevelT
import kotlin.concurrent.thread

/**
 * Created by Rolrence on 9/12/2017.
 *
 */
class JsBinder constructor(val content: Activity, val view: WebView) {
    var alreadyHasJsInterface = false

    val functions = mutableMapOf<String, (String) -> Unit>()

    fun initGameOption(size: Int = 7,
                       first: HexMark = HexMark.HEX_MARK_VERT,
                       ai: HexMark = HexMark.HEX_MARK_HORI,
                       aiLevel: LevelT = LevelT.BEGINNER) {
        if (alreadyHasJsInterface) {
            view.removeJavascriptInterface("kotlin")
        }
        val kotlinMethod = KotlinMethod(this)
        kotlinMethod.init(size, first, ai, aiLevel)
        view.addJavascriptInterface(kotlinMethod, "kotlin")
        alreadyHasJsInterface = true
    }

    fun show(str: String) = Toast.makeText(content, str, Toast.LENGTH_LONG).show()

    fun bind(js: String, callback: (String) -> Unit) {
        functions[js] = callback
    }

    fun execute(js: String, vararg args: Any): Boolean {
        try {
            val jsArgs = argParser(args).joinToString(separator = ", ")
            val jsExpr = "javascript:$js($jsArgs)"

            Log.i("JsBinder", "[js function call] $jsExpr")

            view.post({
                view.evaluateJavascript(jsExpr, functions.getOrDefault(js, {}))
            })
            return true
        } catch (e: Exception) {
            show(e.message!!)
            return false
        }
    }

    private fun argParser(args: Array<out Any>) = args.map {
        when {
            it is String -> "\"$it\""
            else -> it
        }
    }
}