apply_two :: ((a, a) -> b) -> a -> b
apply_two f x = f (x, x)
