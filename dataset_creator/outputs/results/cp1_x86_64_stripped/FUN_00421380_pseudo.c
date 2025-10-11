
undefined8 FUN_00421380(long param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 auStack_118 [5];
  undefined8 local_f0;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = auStack_118;
  for (lVar5 = 0x1c; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  lVar5 = FUN_00417730(*(undefined8 *)(param_1 + 0x50),1,&DAT_008de180);
  if (lVar5 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    uVar3 = 0;
    goto LAB_004213fa;
  }
  iVar1 = FUN_004222c0(*(undefined8 *)(lVar5 + 0x20));
  if (iVar1 != 0) {
    local_f0 = *(undefined8 *)(param_1 + 0x28);
    iVar1 = FUN_00435f40(*(undefined8 *)(lVar5 + 8),auStack_118);
    if (iVar1 == -1) {
      iVar2 = FUN_00435f80(*(undefined8 *)(lVar5 + 8),param_1);
      if (iVar2 != 0) {
        *(long *)(param_1 + 0x58) = lVar5;
        iVar2 = FUN_0041f510(param_1);
        if (iVar2 != 0) {
          if (param_3 == 0) {
            *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) & 0xfe;
          }
          FUN_004222e0(*(undefined8 *)(lVar5 + 0x20));
          lVar4 = param_1;
          if (param_2 != (long *)0x0) goto LAB_00421490;
          goto LAB_004214a9;
        }
        FUN_00435e40(*(undefined8 *)(lVar5 + 8),param_1);
      }
      FUN_004222e0(*(undefined8 *)(lVar5 + 0x20));
      if (param_2 == (long *)0x0) goto LAB_004213f8;
    }
    else {
      lVar4 = FUN_004364a0(*(undefined8 *)(lVar5 + 8),iVar1);
      FUN_004222e0(*(undefined8 *)(lVar5 + 0x20));
      if (param_2 == (long *)0x0) {
joined_r0x004214d3:
        if (-1 < iVar1) {
          FUN_00420b10(param_1,0);
          FUN_00420d40(param_1);
        }
LAB_004214a9:
        uVar3 = 1;
        goto LAB_004213fa;
      }
LAB_00421490:
      iVar2 = FUN_00420ec0(lVar4);
      if (iVar2 != 0) {
        *param_2 = lVar4;
        goto joined_r0x004214d3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/provider_core.c",0x281,"ossl_provider_add_to_store");
      FUN_0051f8f0(0xf,0xc0100,0);
      FUN_004222e0(*(undefined8 *)(lVar5 + 0x20));
    }
    FUN_00420d40(*param_2);
  }
LAB_004213f8:
  uVar3 = 0;
LAB_004213fa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

