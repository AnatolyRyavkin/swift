struct St{
    var c: Int = 1
    var d: S
    struct S{
        var a: String
    }
}

var b = St(c: 5, d: St.S(a: "fff"))


//var b1 = St(c: 2)


//var b2 = St(b)

//var b3 = St()


print(b.d.a, b.c)