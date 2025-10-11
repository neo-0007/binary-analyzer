
bool FUN_00468420(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00485290(*param_1);
  if (param_2 != 0) {
    iVar1 = FUN_0043c4c0(param_1 + 1,param_2,uVar2);
    if (iVar1 == 0) {
      return false;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"key");
    if (lVar3 != 0) {
      FUN_0041aef0(param_1[4],param_1[5],"../providers/implementations/kdfs/krb5kdf.c",99);
      param_1[4] = 0;
      param_1[5] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 4,0,param_1 + 5);
      if (iVar1 == 0) {
        return false;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"constant");
    if (lVar3 != 0) {
      FUN_0041aef0(param_1[6],param_1[7],"../providers/implementations/kdfs/krb5kdf.c",99);
      param_1[6] = 0;
      param_1[7] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 6,0,param_1 + 7);
      return iVar1 != 0;
    }
  }
  return true;
}

