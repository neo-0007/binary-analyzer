
bool FUN_00407440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = FUN_00405f40();
  if (lVar2 != 0) {
    FUN_0040b0c0(lVar2,1);
    iVar1 = FUN_00407430(lVar2,param_5,param_6);
    if ((iVar1 == 0) || (iVar1 = FUN_00405f60(lVar2,param_1,param_2), iVar1 == 0)) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_00406090(lVar2,param_3,param_4);
      bVar3 = iVar1 != 0;
    }
    FUN_00406b90(lVar2);
    return bVar3;
  }
  return false;
}

