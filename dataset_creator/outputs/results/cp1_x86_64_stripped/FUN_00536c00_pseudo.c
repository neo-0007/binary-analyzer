
ulong FUN_00536c00(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  int local_e4;
  ulong local_e0;
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_30;
  
  iVar1 = (int)param_3;
  local_e0 = (ulong)iVar1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = local_d8;
  for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if ((param_1 == (long *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_enc.c",0x43f,"EVP_CIPHER_CTX_ctrl");
    FUN_0051f8f0(6,0x83,0);
    uVar2 = 0;
    goto LAB_00536cb2;
  }
  if (*(long *)(lVar3 + 0x78) == 0) {
    if (*(code **)(lVar3 + 0x50) == (code *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_enc.c",0x4f3,"EVP_CIPHER_CTX_ctrl");
      FUN_0051f8f0(6,0x84,0);
      uVar2 = 0;
      goto LAB_00536cb2;
    }
    uVar2 = (**(code **)(lVar3 + 0x50))(param_1,param_2,param_3,param_4);
    goto LAB_00536cf5;
  }
  switch(param_2 & 0xffffffff) {
  case 0:
    uVar2 = 1;
    goto LAB_00536cb2;
  case 1:
    FUN_0041dba0(&local_118,"keylen",&local_e0);
    break;
  case 2:
    FUN_0041dba0(&local_118,"keybits",&local_e0);
    goto LAB_00536dd4;
  case 3:
    FUN_0041dba0(&local_118,"keybits",&local_e0);
    goto LAB_00536e24;
  case 4:
    if (-1 < iVar1) {
      local_e4 = iVar1;
      FUN_0041ced0(&local_118,"rounds",&local_e4);
      goto LAB_00536e70;
    }
    goto LAB_00536d2a;
  case 5:
    if (iVar1 < 0) goto LAB_00536d2a;
    local_e4 = iVar1;
    FUN_0041ced0(&local_118,"rounds",&local_e4);
LAB_00536e24:
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_00536d6b;
  case 6:
    FUN_0041e2e0(&local_118,"randkey",param_4,local_e0);
LAB_00536e70:
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_00536df3;
  default:
    goto switchD_00536c77_caseD_7;
  case 9:
    if (iVar1 < 0) goto LAB_00536d2a;
    FUN_0041dba0(&local_118,"ivlen",&local_e0);
    goto LAB_00536d4c;
  case 0x10:
    FUN_0041e2e0(&local_118,"tag",param_4,local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    local_b8 = local_f8;
    goto LAB_00536df3;
  case 0x11:
    FUN_0041e2e0(&local_118,"tag",param_4,local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_00536d6b;
  case 0x12:
    FUN_0041e2e0(&local_118,"tlsivfixed",param_4,local_e0);
    goto LAB_00536d4c;
  case 0x13:
    if (iVar1 < 0) {
      local_e0 = 0;
    }
    FUN_0041e2e0(&local_118,"tlsivgen",param_4,local_e0);
LAB_00536dd4:
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
LAB_00536df3:
    uVar2 = FUN_0040b850(*param_1,param_1[0x15],local_d8);
    goto LAB_00536cf5;
  case 0x14:
    if (6 < iVar1 - 2U) goto LAB_00536d2a;
    local_e0 = (ulong)(0xf - iVar1);
    FUN_0041dba0(&local_118,"ivlen",&local_e0);
    break;
  case 0x16:
    FUN_0041e2e0(&local_118,"tlsaad",param_4,local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    uVar2 = FUN_0040b8d0(*param_1,param_1[0x15],local_d8);
    if (0 < (int)uVar2) {
      FUN_0041dba0(&local_118,"tlsaadpad",&local_e0);
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_b8 = local_f8;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      uVar2 = FUN_0040b850(*param_1,param_1[0x15],local_d8);
      if ((int)uVar2 < 1) goto LAB_00536cf5;
      goto LAB_005370b0;
    }
    goto LAB_00536cf5;
  case 0x17:
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
      goto LAB_00536cb2;
    }
    pcVar4 = "mackey";
    goto LAB_005370d8;
  case 0x18:
    if (iVar1 < 0) goto LAB_00536d2a;
    pcVar4 = "tlsivinv";
LAB_005370d8:
    FUN_0041e2e0(&local_118,pcVar4,param_4,local_e0);
    break;
  case 0x19:
    if (iVar1 < 0x20) goto LAB_00536d2a;
    FUN_0041e2e0(&local_118,"tls1multi_aad",param_4[1],param_4[2]);
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    FUN_0041ced0(&local_118,"tls1multi_interleave",param_4 + 3);
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_90 = local_f8;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    uVar2 = FUN_0040b8d0(*param_1,param_1[0x15],local_d8);
    if ((int)uVar2 < 1) goto LAB_00536cb2;
    FUN_0041dba0(&local_118,"tls1multi_aadpacklen",&local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    FUN_0041ced0(&local_118,"tls1multi_interleave",param_4 + 3);
    local_90 = local_f8;
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    FUN_0041e470(&local_118);
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_78 = local_108;
    uStack_70 = uStack_100;
    local_68 = local_f8;
    goto LAB_0053722c;
  case 0x1a:
    FUN_0041e2e0(&local_118,"tls1multi_enc",*param_4,param_4[2]);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    FUN_0041e2e0(&local_118,"tls1multi_encin",param_4[1],param_4[2]);
    local_90 = local_f8;
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    FUN_0041ced0(&local_118,"tls1multi_interleave",param_4 + 3);
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_68 = local_f8;
    local_78 = local_108;
    uStack_70 = uStack_100;
    uVar2 = FUN_0040b8d0(*param_1,param_1[0x15],local_d8);
    if ((int)uVar2 < 1) goto LAB_00536cb2;
    FUN_0041dba0(&local_118,"tls1multi_enclen",&local_e0);
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    FUN_0041e470(&local_118);
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    goto LAB_0053721f;
  case 0x1c:
    FUN_0041dba0(&local_118,"tls1multi_maxsndfrag",&local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    iVar1 = FUN_0040b8d0(*param_1,param_1[0x15],local_d8);
    if (iVar1 < 1) goto LAB_00536d2a;
    FUN_0041dba0(&local_118,"tls1multi_maxbufsz",&local_e0);
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    FUN_0041e470(&local_118);
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
LAB_0053721f:
    local_90 = local_f8;
LAB_0053722c:
    iVar1 = FUN_0040b850(*param_1,param_1[0x15],local_d8);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
LAB_005370b0:
      uVar2 = local_e0 & 0xffffffff;
    }
    goto LAB_00536cb2;
  case 0x27:
    if (iVar1 < 0) goto LAB_00536d2a;
    local_e4 = iVar1;
    FUN_0041ced0(&local_118,"speed",&local_e4);
LAB_00536d4c:
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_00536d6b;
  }
  local_d8[0] = local_118;
  local_d8[1] = uStack_110;
  local_d8[2] = local_108;
  local_d8[3] = uStack_100;
  local_b8 = local_f8;
LAB_00536d6b:
  uVar2 = FUN_0040b8d0(*param_1,param_1[0x15],local_d8);
LAB_00536cf5:
  if ((int)uVar2 == -1) {
switchD_00536c77_caseD_7:
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_enc.c",0x4fb,"EVP_CIPHER_CTX_ctrl");
    FUN_0051f8f0(6,0x85,0);
LAB_00536d2a:
    uVar2 = 0;
  }
LAB_00536cb2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

