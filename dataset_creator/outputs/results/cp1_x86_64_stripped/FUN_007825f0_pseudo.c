
long FUN_007825f0(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar3 = param_3;
LAB_00782608:
  do {
    lVar2 = FUN_0076d9c0(param_1,param_2,lVar3);
    if (lVar2 == -1) {
      iVar1 = *(int *)(in_FS_OFFSET + -0x58);
      if (iVar1 == 4) goto LAB_00782608;
    }
    else {
      if (0 < lVar2) {
        param_2 = param_2 + lVar2;
        lVar3 = lVar3 - lVar2;
        if (lVar3 == 0) {
          return param_3;
        }
        goto LAB_00782608;
      }
      if (lVar2 == 0) goto LAB_0078266a;
      iVar1 = *(int *)(in_FS_OFFSET + -0x58);
    }
    if ((iVar1 != 0xb) || (iVar1 = FUN_00782220(param_1,200), iVar1 < 1)) {
      if (lVar2 < 0) {
        return lVar2;
      }
LAB_0078266a:
      return param_3 - lVar3;
    }
  } while( true );
}

