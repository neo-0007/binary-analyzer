
ulong FUN_0061f9c0(undefined8 param_1,long *param_2)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long in_FS_OFFSET;
  ushort *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ushort *)0x0;
  if (param_2 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    lVar6 = *param_2;
    bVar1 = false;
    if (lVar6 == 0) {
      uVar4 = FUN_0061f9c0(param_1,0);
      uVar7 = (ulong)uVar4;
      if (uVar4 == 0xffffffff) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ct/ct_oct.c",0x14a,"i2o_SCT_LIST");
        FUN_0051f8f0(0x32,0x69,0);
        goto LAB_0061faa9;
      }
      lVar6 = FUN_0041ad90((long)(int)uVar4,"../crypto/ct/ct_oct.c",0x14d);
      *param_2 = lVar6;
      if (lVar6 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ct/ct_oct.c",0x14e,"i2o_SCT_LIST");
        uVar7 = 0xffffffff;
        FUN_0051f8f0(0x32,0xc0100,0);
        goto LAB_0061faa9;
      }
      bVar1 = true;
    }
    local_48 = (ushort *)(lVar6 + 2);
  }
  uVar7 = 2;
  iVar8 = 0;
  while( true ) {
    iVar3 = FUN_00436480(param_1);
    puVar2 = local_48;
    if (iVar3 <= iVar8) break;
    if (param_2 == (long *)0x0) {
      uVar5 = FUN_004364a0(param_1,iVar8);
      iVar3 = FUN_0061f570(uVar5,0);
      if (iVar3 == -1) goto LAB_0061fa9b;
    }
    else {
      local_48 = local_48 + 1;
      uVar5 = FUN_004364a0(param_1,iVar8);
      iVar3 = FUN_0061f570(uVar5,&local_48);
      if (iVar3 == -1) goto LAB_0061fa9b;
      *puVar2 = (ushort)iVar3 << 8 | (ushort)iVar3 >> 8;
    }
    iVar8 = iVar8 + 1;
    uVar7 = uVar7 + (long)(iVar3 + 2);
  }
  if (uVar7 < 0x10000) {
    if (param_2 != (long *)0x0) {
      local_48 = (ushort *)*param_2;
      *(char *)local_48 = (char)(uVar7 - 2 >> 8);
      *(char *)((long)local_48 + 1) = (char)uVar7 + -2;
      if (!bVar1) {
        *param_2 = *param_2 + uVar7;
      }
    }
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
LAB_0061fa9b:
    uVar7 = 0xffffffff;
    if (bVar1) {
      FUN_0041ad60(*param_2,"../crypto/ct/ct_oct.c",0x172);
      *param_2 = 0;
    }
  }
LAB_0061faa9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

