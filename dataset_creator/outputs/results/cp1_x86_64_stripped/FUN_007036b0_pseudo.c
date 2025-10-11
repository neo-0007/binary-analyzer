
void FUN_007036b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  undefined1 auStack_c8 [24];
  uint local_b0;
  long local_98;
  long local_30;
  
  lVar3 = *(long *)(param_1 + 0xd8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x827 < lVar3 - 0x93f160U) {
    FUN_00703130();
  }
  iVar1 = (**(code **)(lVar3 + 0x90))(param_1,auStack_c8);
  if ((((iVar1 == 0) && ((local_b0 & 0xf000) == 0x8000)) && (local_98 != 0)) &&
     ((*(long *)(param_1 + 0x90) <= local_98 || (*(long *)(param_1 + 0x90) == -1)))) {
    lVar3 = FUN_0076f020(0,local_98,1,1,*(undefined4 *)(param_1 + 0x70),0);
    if (lVar3 != -1) {
      lVar4 = FUN_0076db00(*(undefined4 *)(param_1 + 0x70),local_98,0);
      if (lVar4 == local_98) {
        FUN_007069a0(param_1,lVar3,lVar3 + lVar4,0);
        *(long *)(param_1 + 0x18) = lVar3;
        puVar5 = &DAT_0093f220;
        lVar4 = lVar3 + *(long *)(param_1 + 0x90);
        if (*(long *)(param_1 + 0x90) == -1) {
          lVar4 = lVar3;
        }
        *(long *)(param_1 + 0x90) = local_98;
        puVar2 = &DAT_0093f520;
        *(long *)(param_1 + 8) = lVar4;
        *(long *)(param_1 + 0x10) = lVar3 + local_98;
        goto LAB_0070373a;
      }
      FUN_0076f080(lVar3);
      *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
    }
  }
  puVar2 = &DAT_0093f5e0;
  puVar5 = &DAT_0093f2e0;
LAB_0070373a:
  if (0 < *(int *)(param_1 + 0xc0)) {
    puVar2 = puVar5;
  }
  *(undefined **)(param_1 + 0xd8) = puVar2;
  *(undefined **)(*(long *)(param_1 + 0xa0) + 0xe0) = puVar5;
  lVar3 = *(long *)(param_1 + 0xd8);
  if (0x827 < lVar3 - 0x93f160U) {
    FUN_00703130();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    (**(code **)(lVar3 + 0x40))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

