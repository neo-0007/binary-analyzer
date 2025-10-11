
ulong _IO_wdo_write(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  long local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  long local_40;
  
  uVar5 = *(undefined8 *)(param_1 + 0x26);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 10);
    puVar8 = *(undefined1 **)(param_1 + 8);
    if ((*(undefined1 **)(param_1 + 0xc) == puVar7) && (puVar7 != puVar8)) {
      uVar4 = _IO_do_write(param_1,puVar8,(long)puVar7 - (long)puVar8);
      if ((int)uVar4 == -1) goto LAB_006f7a90;
      puVar7 = *(undefined1 **)(param_1 + 10);
      puVar8 = *(undefined1 **)(param_1 + 8);
    }
    while( true ) {
      if ((ulong)((long)puVar7 - (long)puVar8) < 0x10) {
        puVar3 = local_48;
        puVar7 = local_58;
        puVar8 = local_58;
      }
      else {
        puVar3 = *(undefined1 **)(param_1 + 0x10);
      }
      local_60 = puVar7;
      iVar2 = __libio_codecvt_out(uVar5,*(long *)(param_1 + 0x28) + 0x58,param_2,
                                  param_2 + param_3 * 4,&local_68,puVar7,puVar3,&local_60);
      uVar4 = _IO_do_write(param_1,puVar8,(long)local_60 - (long)puVar8);
      if ((int)uVar4 == -1) goto LAB_006f7a90;
      param_3 = param_3 - (local_68 - param_2 >> 2);
      if ((iVar2 != 0) && ((local_68 == param_2 || (iVar2 != 1)))) {
        puVar6 = *(undefined8 **)(param_1 + 0x28);
        uVar4 = (ulong)-(uint)(param_3 != 0);
        uVar5 = puVar6[6];
        puVar6[4] = uVar5;
        *puVar6 = uVar5;
        puVar6[1] = uVar5;
        puVar6[2] = uVar5;
        puVar6[3] = uVar5;
        if ((*param_1 & 0x202) == 0) goto LAB_006f7a88;
        goto LAB_006f7a8c;
      }
      if (param_3 == 0) break;
      puVar7 = *(undefined1 **)(param_1 + 10);
      puVar8 = *(undefined1 **)(param_1 + 8);
      param_2 = local_68;
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  uVar1 = *param_1;
  uVar5 = puVar6[6];
  puVar6[4] = uVar5;
  *puVar6 = uVar5;
  puVar6[1] = uVar5;
  puVar6[2] = uVar5;
  puVar6[3] = uVar5;
  uVar4 = (ulong)(uVar1 & 0x202);
  if ((uVar1 & 0x202) == 0) {
LAB_006f7a88:
    uVar5 = puVar6[7];
LAB_006f7a8c:
    puVar6[5] = uVar5;
  }
  else {
    puVar6[5] = uVar5;
    uVar4 = 0;
  }
LAB_006f7a90:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

