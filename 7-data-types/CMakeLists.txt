add_executable(int-limits int-limits.c)
add_executable(int-overflow int-overflow.c)

add_executable(unsigned unsigned.c)
add_executable(timing timing.c)

add_executable(char char.c)

add_executable(implicit-conversion implicit-conversion.c)
add_executable(explict-conversion explict-conversion.c)

add_executable(float-limits float-limits.c)

add_executable(sums sum-product.c)
add_executable(loop loop.c)

add_executable(compare compare.c)
target_link_libraries(compare m)