
undefined8 FUN_00514ce0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  iVar2 = *(int *)(param_3 + 1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (iVar2 == 0) {
    if (param_3[2] != 0) {
      lVar3 = FUN_00418710(*param_3);
      lVar1 = param_3[2];
      lVar4 = thunk_FUN_00712710(lVar1,0x3a);
      lVar6 = lVar4 - lVar1;
      if (lVar4 == 0) {
        lVar6 = thunk_FUN_007129d0(lVar1);
      }
      if ((lVar3 != 0) && (iVar2 = FUN_004188b0(lVar3,lVar1,lVar6), iVar2 != 0)) goto LAB_00514d60;
    }
  }
  else {
LAB_00514d60:
    if (((param_1 != 0) || (param_1 = FUN_00417730(*param_3,0xb,&DAT_00904060), param_1 != 0)) &&
       (iVar2 = FUN_00425a00(param_1,iVar2,param_3[3],param_2,&local_38), uVar5 = local_38,
       iVar2 != 0)) goto LAB_00514d81;
  }
  uVar5 = 0;
LAB_00514d81:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

