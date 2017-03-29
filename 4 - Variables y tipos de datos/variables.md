# Variables

Se utilizan para almacenar datos. Se define como una _"porción de memoria"_
utilizada para guardar un valor.Cada variable necesita un _"identificador"_
(o nombre) para ser diferenciada del resto.

## Identificador

Secuencia válida de una o más letras, dígitos o guión bajo ( \_ ).
Espacios, signos de puntuación o símbolos **no son permitidos**.
Deben siempre comenzar con una letra. También pueden comenzar con un guión bajo
( \_ ), pero en la _mayoría de los casos_ estos identificadores se consideran
reservados para palabras específicas del compilador.

## Palabras reservadas de C++

Las siguientes palabras están específicamente reservadas y **no pueden
ser utilizadas** como identificadores de variables.

```
alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break,
case, catch, char, char16_t, char32_t, class, compl, const, constexpr,
const_cast, continue, decltype, default, delete, do, double, dynamic_cast,
else, enum, explicit, export, extern, false, float, for, friend, goto,
if, inline, int, long, mutable, namespace, new, noexcept, not, not_eq,
nullptr, operator, or, or_eq, private, protected, public, register,
reinterpret_cast, return, short, signed, sizeof, static, static_assert,
static_cast, struct, switch, template, this, thread_local, throw, true,
try, typedef, typeid, typename, union, unsigned, using, virtual, void,
volatile, wchar_t, while, xor, xor_eq
```

> Nota: Algunos compiladores podrían tener otras palabras reservadas.

> **IMPORTANTE:** C++ es un lenguaje sensible a la diferencia entre minúsculas
> y mayúsculas.
