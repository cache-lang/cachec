```````````````````````````````````````````````` use
` use foo:bar;
```````````````````````````````````````````````` mod
` mod foo:bar;
```````````````````````````````````````````````` comp, field
` comp SomeComp (
`     i32 foo,
`     i32 bar,
` ) {};
```````````````````````````````````````````````` enum, option
` enum SomeEnum (
`     i32 foo,
`     i32 bar,
`     
`     Option0,
`     Option1(i32 foo, f32 bar),
`     Option2(),
` ) {};
```````````````````````````````````````````````` tag_def, arg
` tag test_tag(string foo, int bar) { };
```````````````````````````````````````````````` prop
` prop SomeProp { };
```````````````````````````````````````````````` def
` def SomeProp<T, TT>, SomeObject<T, TT> { };
```````````````````````````````````````````````` sub_def, arg
` foo:bar xyz() {};
` sub foo(i32 bar) {
`     foo:bar xyz = 1;
`     var bar = 1;
`     if 0 { } elif 1 { } else { };
`     loop { };
`     while 2 { };
`     for i, i < 1, i += 1 { };
`     each i in foo { };
`     match foo { 0 { }, 1 { }, };
`     ret ~foo 1;
`     next ~foo;
`     jump ~foo;
`     try ~foo bar();
` };
```````````````````````````````````````````````` var_def
` foo:bar xyz = 1;
` var bar = 1;
````````````````````````````````````````````````

` gen replacement everywhere
` dont generate gen twice

` apply mods
` binds
` keep main
` keep basic types

` free exprs & generic replaced paths

#req("stdio.h")
int main () {
    Foo:Bar<int, f32, f64> a;
};

#gen("T")
#gen("U")
#gen("V")
comp Foo:Bar<T, U, V> (
    T a,
    U b,
    V c,
);