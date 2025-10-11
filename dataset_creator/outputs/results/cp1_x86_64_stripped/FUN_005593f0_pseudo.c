
bool FUN_005593f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = FUN_00405f40();
  lVar3 = FUN_004069d0(param_6,&DAT_007d039e,param_7);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    iVar1 = FUN_00407430(lVar2,lVar3,0);
    if (iVar1 != 0) {
      iVar1 = FUN_00405f60(lVar2,param_2,param_3);
      if (iVar1 != 0) {
        iVar1 = FUN_00405f60(lVar2,param_4,(long)param_5);
        if (iVar1 != 0) {
          iVar1 = FUN_00406090(lVar2,param_1,0);
          bVar4 = iVar1 != 0;
          goto LAB_0055944e;
        }
      }
    }
  }
  bVar4 = false;
LAB_0055944e:
  FUN_00406b90(lVar2);
  FUN_00406a50(lVar3);
  return bVar4;
}

