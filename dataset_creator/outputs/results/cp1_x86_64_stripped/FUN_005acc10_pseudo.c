
void FUN_005acc10(long *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_004c4ff0(puVar1[2]);
      FUN_00436430(*puVar1,FUN_005acaf0);
      FUN_0041ad60(puVar1[3],"../crypto/x509/x_name.c",0x7b);
      FUN_0041ad60(puVar1,"../crypto/x509/x_name.c",0x7c);
      *param_1 = 0;
    }
    return;
  }
  return;
}

