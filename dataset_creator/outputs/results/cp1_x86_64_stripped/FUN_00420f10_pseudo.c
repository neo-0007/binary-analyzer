
long FUN_00420f10(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined8 auStack_118 [5];
  undefined8 local_f0;
  long local_30;
  
  bVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_00417730(param_1,1,&DAT_008de180);
  if (lVar2 == 0) {
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
  }
  else {
    puVar4 = auStack_118;
    for (lVar3 = 0x1c; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    if ((param_3 == 0) && (iVar1 = FUN_00417590(param_1), iVar1 != 0)) {
      FUN_00419fe0(0x40,0);
    }
    local_f0 = param_2;
    iVar1 = FUN_004222c0(*(undefined8 *)(lVar2 + 0x20));
    if (iVar1 != 0) {
      iVar1 = FUN_00435f40(*(undefined8 *)(lVar2 + 8),auStack_118);
      if (iVar1 == -1) {
        FUN_004222e0(*(undefined8 *)(lVar2 + 0x20));
      }
      else {
        lVar3 = FUN_004364a0(*(undefined8 *)(lVar2 + 8),iVar1);
        FUN_004222e0(*(undefined8 *)(lVar2 + 0x20));
        if ((lVar3 != 0) && (iVar1 = FUN_00420ec0(lVar3), iVar1 != 0)) goto LAB_00420fa6;
      }
    }
    lVar3 = 0;
  }
LAB_00420fa6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

