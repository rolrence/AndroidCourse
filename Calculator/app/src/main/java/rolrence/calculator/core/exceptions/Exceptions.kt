package rolrence.calculator.core.exceptions

/**
 * Created by Rolrence on 9/11/2017.
 *
 */
class ParsingException(msg: String): Exception(msg)

class SyntaxError(msg: String): Exception("syntax error: $msg")

class ValueError(msg: String): Exception("value error: $msg")