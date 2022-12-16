# 12-linkedlist

## `.h`

- `ifndef`

## `CMakeLists.txt`

- `ll/ll.h` or `ll/ll.c`

## `ll.h`

- `struct node`
- `struct ll`

- `Init`
- `Free`

## `ll.c`

## `josephus.c`
- `SitAroundCircle`
  - `Append`
    - Special Case: `IsEmpty`
  - `Print`
- `KillUntilOne`
  - `Delete`
    - Special Case: `cur == list->head`
    - Special Case: `cur == list->tail`
    - `IsSingleton`
      - Special Case: `!IsEmpty`
    - `IsEmpty`
    - remember to `free(cur)`
- `GetSurvivor`
  - `GetHeadVal`
  - `assert`