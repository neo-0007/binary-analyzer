
void FUN_00545130(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_00406b30(param_1[2]);
    FUN_00406b30(param_1[3]);
    FUN_00406b30(param_1[1]);
    *param_1 = 0;
    FUN_00406b90(param_1[2]);
    FUN_00406b90(param_1[3]);
    FUN_00406b90(param_1[1]);
    FUN_0041ad60(param_1,"../crypto/hmac/hmac.c",0xad);
    return;
  }
  return;
}

