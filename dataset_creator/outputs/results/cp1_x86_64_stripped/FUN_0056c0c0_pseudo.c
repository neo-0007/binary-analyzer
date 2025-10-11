
undefined8
FUN_0056c0c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  uint local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = FUN_00405f40();
  if ((lVar4 == 0) || (iVar2 = FUN_0040ac10(param_5), iVar2 < 0)) {
LAB_0056c24d:
    uVar7 = 0xffffffff;
  }
  else {
    if (0 < param_2) {
      uVar5 = 0;
      lVar6 = 0;
      lVar8 = param_1;
      do {
        local_8c = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        iVar3 = FUN_00407430(lVar4,param_5,0);
        if (((iVar3 == 0) || (iVar3 = FUN_00405f60(lVar4,param_3,param_4), iVar3 == 0)) ||
           (iVar3 = FUN_00405f60(lVar4,&local_8c,4), iVar3 == 0)) goto LAB_0056c24d;
        lVar1 = iVar2 + lVar6;
        if (param_2 < lVar1) {
          iVar2 = FUN_00406090(lVar4,local_88,0);
          if (iVar2 == 0) goto LAB_0056c24d;
          uVar7 = 0;
          thunk_FUN_00713a50(param_1 + lVar6,local_88,param_2 - lVar6);
          goto LAB_0056c208;
        }
        iVar3 = FUN_00406090(lVar4,lVar8,0);
        if (iVar3 == 0) goto LAB_0056c24d;
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + iVar2;
        lVar6 = lVar1;
      } while (lVar1 < param_2);
    }
    uVar7 = 0;
  }
LAB_0056c208:
  FUN_004227b0(local_88,0x40);
  FUN_00406b90(lVar4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

