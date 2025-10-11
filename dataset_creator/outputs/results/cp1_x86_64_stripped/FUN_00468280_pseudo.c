
void FUN_00468280(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_0043c400(param_1 + 1);
  FUN_0041aef0(param_1[4],param_1[5],"../providers/implementations/kdfs/krb5kdf.c",0x5a);
  FUN_0041aef0(param_1[6],param_1[7],"../providers/implementations/kdfs/krb5kdf.c",0x5b);
  *param_1 = uVar1;
  param_1[7] = 0;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  return;
}

