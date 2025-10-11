
int FUN_004da1c0(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_44 [4];
  long local_40;
  
  piVar1 = *(int **)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar3 = 0;
  }
  else {
    iVar2 = 0;
    lVar3 = FUN_004b7dd0();
    if (lVar3 == 0) goto LAB_004da285;
    FUN_00412200(lVar3,param_1);
  }
  lVar4 = FUN_004d8c90();
  if (lVar4 == 0) {
    iVar2 = 0;
    FUN_004b7e40(lVar3);
  }
  else {
    if (*(long *)(piVar1 + 6) != 0) {
      uVar5 = FUN_0040ab30();
      FUN_00542190(lVar4 + 8,uVar5,0);
    }
    iVar2 = FUN_00544890(0,lVar4 + 8,0,(long)*piVar1,(long)piVar1[1],local_44,lVar3);
    FUN_004b7e40(lVar3);
    if (iVar2 < 1) {
      FUN_004d8960(lVar4);
    }
    else {
      FUN_0040f1c0(param_2,0x74,lVar4);
    }
  }
LAB_004da285:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

