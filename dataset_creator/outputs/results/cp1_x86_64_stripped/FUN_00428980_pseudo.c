
undefined8 FUN_00428980(long *param_1,long param_2)

{
  if ((param_2 != 0) &&
     (param_2 = FUN_0041c2c0(param_2,"../crypto/rand/rand_lib.c",0x2e0), param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rand/rand_lib.c",0x2e2,"random_set_string");
    FUN_0051f8f0(0xf,0xc0100,0);
    return 0;
  }
  FUN_0041ad60(*param_1,"../crypto/rand/rand_lib.c",0x2e6);
  *param_1 = param_2;
  return 1;
}

