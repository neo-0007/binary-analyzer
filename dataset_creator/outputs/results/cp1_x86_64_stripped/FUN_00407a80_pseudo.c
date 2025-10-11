
int * FUN_00407a80(int param_1,long param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int local_110;
  int local_10c;
  ulong local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  piVar5 = *(int **)(param_2 + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)FUN_00406960();
  if (piVar2 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/digest.c",0x3b0,"evp_md_from_algorithm");
    FUN_0051f8f0(6,0xc0100,0);
    goto LAB_00407d24;
  }
  *piVar2 = 0;
  iVar1 = FUN_00409210(param_3,param_1,FUN_00405f00);
  if ((iVar1 == 0) || (*piVar2 == -1)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/digest.c",0x3b8,"evp_md_from_algorithm");
    FUN_0051f8f0(6,0xc0103,0);
    FUN_00406a50(piVar2);
    piVar2 = (int *)0x0;
    goto LAB_00407d24;
  }
  piVar2[0x16] = param_1;
  lVar3 = FUN_00417d20(param_2);
  *(long *)(piVar2 + 0x18) = lVar3;
  if (lVar3 == 0) {
    FUN_00406a50(piVar2);
    piVar2 = (int *)0x0;
    goto LAB_00407d24;
  }
  *(undefined8 *)(piVar2 + 0x1a) = *(undefined8 *)(param_2 + 0x18);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
LAB_00407fb8:
    if (*(long *)(piVar2 + 0x2a) == 0) {
LAB_00407fc7:
      FUN_00406a50(piVar2);
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/digest.c",0x413,"evp_md_from_algorithm");
      FUN_0051f8f0(6,0xc1,0);
      piVar2 = (int *)0x0;
      goto LAB_00407d24;
    }
  }
  else {
    iVar4 = 0;
    do {
      switch(iVar1) {
      case 1:
        if (*(long *)(piVar2 + 0x22) != 0) break;
        *(undefined8 *)(piVar2 + 0x22) = *(undefined8 *)(piVar5 + 2);
        iVar1 = piVar5[4];
joined_r0x00407fa6:
        iVar4 = iVar4 + 1;
        goto joined_r0x00407ec6;
      case 2:
        if (*(long *)(piVar2 + 0x24) == 0) {
          *(undefined8 *)(piVar2 + 0x24) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407fa6;
        }
        break;
      case 3:
        if (*(long *)(piVar2 + 0x26) == 0) {
          *(undefined8 *)(piVar2 + 0x26) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
joined_r0x00407f36:
          iVar4 = iVar4 + 1;
          goto joined_r0x00407ec6;
        }
        break;
      case 4:
        if (*(long *)(piVar2 + 0x28) == 0) {
          *(undefined8 *)(piVar2 + 0x28) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407f36;
        }
        break;
      case 5:
        if (*(long *)(piVar2 + 0x2a) == 0) {
          *(undefined8 *)(piVar2 + 0x2a) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407ec6;
        }
        break;
      case 6:
        if (*(long *)(piVar2 + 0x2c) == 0) {
          iVar4 = iVar4 + 1;
          *(undefined8 *)(piVar2 + 0x2c) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407ec6;
        }
        break;
      case 7:
        if (*(long *)(piVar2 + 0x2e) == 0) {
          *(undefined8 *)(piVar2 + 0x2e) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407ec6;
        }
        break;
      case 8:
        if (*(long *)(piVar2 + 0x30) == 0) {
          *(undefined8 *)(piVar2 + 0x30) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407ec6;
        }
        break;
      case 9:
        if (*(long *)(piVar2 + 0x32) == 0) {
          *(undefined8 *)(piVar2 + 0x32) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407ec6;
        }
        break;
      case 10:
        if (*(long *)(piVar2 + 0x34) == 0) {
          *(undefined8 *)(piVar2 + 0x34) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407ec6;
        }
        break;
      case 0xb:
        if (*(long *)(piVar2 + 0x36) == 0) {
          *(undefined8 *)(piVar2 + 0x36) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407ec6;
        }
        break;
      case 0xc:
        if (*(long *)(piVar2 + 0x38) == 0) {
          *(undefined8 *)(piVar2 + 0x38) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407ec6;
        }
        break;
      case 0xd:
        if (*(long *)(piVar2 + 0x3a) == 0) {
          *(undefined8 *)(piVar2 + 0x3a) = *(undefined8 *)(piVar5 + 2);
          iVar1 = piVar5[4];
          goto joined_r0x00407ec6;
        }
      }
      iVar1 = piVar5[4];
joined_r0x00407ec6:
      piVar5 = piVar5 + 4;
    } while (iVar1 != 0);
    if (iVar4 == 0) goto LAB_00407fb8;
    if (iVar4 != 5) goto LAB_00407fc7;
  }
  *(long *)(piVar2 + 0x1c) = param_3;
  if (param_3 != 0) {
    FUN_00420ec0(param_3);
  }
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_100 = 0;
  FUN_0041dba0(&local_148,"blocksize",&local_108);
  local_f8 = local_148;
  uStack_f0 = uStack_140;
  local_e8 = local_138;
  uStack_e0 = uStack_130;
  local_d8 = local_128;
  FUN_0041dba0(&local_148,"size",&local_100);
  local_d0 = local_148;
  uStack_c8 = uStack_140;
  local_c0 = local_138;
  uStack_b8 = uStack_130;
  local_b0 = local_128;
  FUN_0041cea0(&local_148,&DAT_007ce0ba,&local_110);
  local_a8 = local_148;
  uStack_a0 = uStack_140;
  local_98 = local_138;
  uStack_90 = uStack_130;
  local_88 = local_128;
  FUN_0041cea0(&local_148,"algid-absent",&local_10c);
  local_60 = local_128;
  local_80 = local_148;
  uStack_78 = uStack_140;
  local_70 = local_138;
  uStack_68 = uStack_130;
  FUN_0041e470(&local_148);
  local_58 = local_148;
  uStack_50 = uStack_140;
  local_38 = local_128;
  local_48 = local_138;
  uStack_40 = uStack_130;
  iVar1 = FUN_0040b950(piVar2,&local_f8);
  if (((local_100 < 0x80000000) && (local_108 < 0x80000000)) && (0 < iVar1)) {
    piVar2[0x12] = (int)local_108;
    piVar2[2] = (int)local_100;
    if (local_110 != 0) {
      *(ulong *)(piVar2 + 4) = *(ulong *)(piVar2 + 4) | 2;
    }
    if (local_10c != 0) {
      *(ulong *)(piVar2 + 4) = *(ulong *)(piVar2 + 4) | 8;
    }
  }
  else {
    FUN_00406a50(piVar2);
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/digest.c",0x41c,"evp_md_from_algorithm");
    FUN_0051f8f0(6,0xe1,0);
    piVar2 = (int *)0x0;
  }
LAB_00407d24:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return piVar2;
}

