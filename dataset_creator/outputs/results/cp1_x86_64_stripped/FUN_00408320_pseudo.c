
undefined8 FUN_00408320(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)((long)param_3 + 0xc);
  local_38 = 0;
  if (iVar3 == 0) {
    if (param_3[2] != 0) {
      lVar4 = FUN_00418710(*param_3);
      lVar2 = param_3[2];
      lVar5 = thunk_FUN_00712710(lVar2,0x3a);
      lVar7 = lVar5 - lVar2;
      if (lVar5 == 0) {
        lVar7 = thunk_FUN_007129d0(lVar2);
      }
      if ((lVar4 != 0) && (iVar3 = FUN_004188b0(lVar4,lVar2,lVar7), iVar3 != 0)) goto LAB_004083a2;
    }
  }
  else {
LAB_004083a2:
    uVar1 = *(uint *)(param_3 + 1);
    if (((iVar3 - 1U < 0x7fffff) && (uVar1 - 1 < 0xff)) &&
       (((param_1 != 0 || (param_1 = FUN_00417730(*param_3,0,&DAT_008dd2c0), param_1 != 0)) &&
        (iVar3 = FUN_00425a00(param_1,uVar1 | iVar3 << 8,param_3[3],param_2,&local_38),
        uVar6 = local_38, iVar3 != 0)))) goto LAB_00408412;
  }
  uVar6 = 0;
LAB_00408412:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

