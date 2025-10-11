
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_double(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong unaff_RBP;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  ulong *extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  long lVar11;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [4];
  undefined8 local_98 [4];
  ulong local_78;
  undefined1 *puStack_70;
  ulong local_68;
  ulong uStack_60;
  undefined1 local_58 [40];
  
  if ((_DAT_0093e5a0 & 0x80100) != 0x80100) {
    puVar5 = &local_d8;
    local_78 = *param_2;
    puStack_70 = (undefined1 *)param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    lVar11 = param_1 + 0x40;
    uStack_e0 = 0x5ed21e;
    puVar6 = param_2;
    __ecp_nistz256_mul_by_2q(param_1,param_1 + 0x20,lVar11,&local_d8);
    uStack_e0 = 0x5ed23c;
    __ecp_nistz256_sqr_montq(local_98,puVar6 + 8);
    uStack_e0 = 0x5ed25c;
    __ecp_nistz256_sqr_montq(&local_d8,&local_d8);
    uStack_e0 = 0x5ed282;
    __ecp_nistz256_mul_montq(lVar11,param_2 + 8);
    uStack_e0 = 0x5ed287;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x5ed2aa;
    __ecp_nistz256_add_toq(local_b8);
    puVar4 = puStack_70;
    uVar9 = local_78;
    uStack_e0 = 0x5ed2cd;
    __ecp_nistz256_sub_fromq(local_98);
    uStack_e0 = 0x5ed2ee;
    puVar6 = extraout_XMM1_Qa;
    __ecp_nistz256_sqr_montq();
    uVar1 = (ulong)(CARRY8((ulong)puVar4,(ulong)puVar5) ||
                   CARRY8((ulong)(puVar4 + (long)puVar5),(ulong)(uVar9 != 0)));
    uVar2 = (ulong)CARRY8(local_d0,uVar1);
    uVar8 = (ulong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
    uVar1 = local_d0 + uVar1;
    uVar3 = uVar9 - 1;
    puVar7 = puVar4 + (long)puVar5 + (uVar9 != 0);
    uVar2 = local_c8 + unaff_RBP + uVar2;
    if ((uVar9 & 1) == 0) {
      uVar8 = 0;
      uVar1 = local_d0;
      uVar3 = uVar9;
      puVar7 = puVar4;
      uVar2 = local_c8;
    }
    uVar9 = (ulong)puVar7 >> 1 | uVar1 << 0x3f;
    *puVar6 = uVar3 >> 1 | (long)puVar7 << 0x3f;
    puVar6[1] = uVar9;
    puVar6[2] = uVar1 >> 1 | uVar2 << 0x3f;
    puVar6[3] = uVar2 >> 1 | uVar8 << 0x3f;
    uStack_e0 = 0x5ed399;
    __ecp_nistz256_mul_montq(local_b8,local_b8);
    uStack_e0 = 0x5ed3a6;
    __ecp_nistz256_mul_by_2q(local_58);
    uStack_e0 = 0x5ed3b5;
    __ecp_nistz256_add_toq(local_b8);
    uStack_e0 = 0x5ed3df;
    __ecp_nistz256_mul_montq(&local_d8,&local_d8);
    uStack_e0 = 0x5ed3ec;
    uVar10 = __ecp_nistz256_mul_by_2q(local_58);
    uStack_e0 = 0x5ed40f;
    __ecp_nistz256_sqr_montq(uVar10,local_b8);
    uStack_e0 = 0x5ed428;
    __ecp_nistz256_sub_fromq();
    uStack_e0 = 0x5ed444;
    __ecp_nistz256_subq(&local_d8);
    local_d8 = local_c0;
    uStack_e0 = 0x5ed481;
    local_d0 = uVar9;
    __ecp_nistz256_mul_montq(&local_d8,&local_d8);
    uStack_e0 = 0x5ed490;
    __ecp_nistz256_sub_fromq(extraout_XMM1_Qa_00);
    return;
  }
  local_78 = *param_2;
  puStack_70 = (undefined1 *)param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  lVar11 = param_1 + 0x40;
  uStack_e0 = 0x5ee367;
  puVar6 = param_2;
  __ecp_nistz256_mul_by_2x(param_1,param_1 + 0x20,lVar11,&local_d8);
  uStack_e0 = 0x5ee385;
  __ecp_nistz256_sqr_montx(local_98,puVar6 + -8,puVar6[8]);
  uStack_e0 = 0x5ee3a6;
  __ecp_nistz256_sqr_montx(&local_d8,auStack_158,local_d8);
  uStack_e0 = 0x5ee3cc;
  __ecp_nistz256_mul_montx(lVar11,param_2 + -8,param_2[4]);
  uStack_e0 = 0x5ee3d1;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x5ee3f4;
  __ecp_nistz256_add_tox(local_b8);
  puVar4 = puStack_70;
  uVar9 = local_78;
  uStack_e0 = 0x5ee417;
  __ecp_nistz256_sub_fromx(local_98);
  puVar7 = auStack_158;
  uStack_e0 = 0x5ee439;
  puVar6 = extraout_XMM1_Qa_01;
  __ecp_nistz256_sqr_montx(extraout_XMM1_Qa_01,puVar7,local_d8);
  uVar1 = (ulong)(CARRY8((ulong)puVar4,(ulong)puVar7) ||
                 CARRY8((ulong)(puVar4 + (long)puVar7),(ulong)(uVar9 != 0)));
  uVar2 = (ulong)CARRY8(local_d0,uVar1);
  uVar8 = (ulong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
  uVar1 = local_d0 + uVar1;
  uVar3 = uVar9 - 1;
  puVar7 = puVar4 + (long)puVar7 + (uVar9 != 0);
  uVar2 = local_c8 + unaff_RBP + uVar2;
  if ((uVar9 & 1) == 0) {
    uVar8 = 0;
    uVar1 = local_d0;
    uVar3 = uVar9;
    puVar7 = puVar4;
    uVar2 = local_c8;
  }
  uVar9 = (ulong)puVar7 >> 1 | uVar1 << 0x3f;
  *puVar6 = uVar3 >> 1 | (long)puVar7 << 0x3f;
  puVar6[1] = uVar9;
  puVar6[2] = uVar1 >> 1 | uVar2 << 0x3f;
  puVar6[3] = uVar2 >> 1 | uVar8 << 0x3f;
  uStack_e0 = 0x5ee4e4;
  __ecp_nistz256_mul_montx(local_b8,auStack_138,local_98[0],uVar2 << 0x3f,local_c8,local_b8[0]);
  uStack_e0 = 0x5ee4f1;
  __ecp_nistz256_mul_by_2x(local_58);
  uStack_e0 = 0x5ee500;
  __ecp_nistz256_add_tox(local_b8);
  uStack_e0 = 0x5ee52b;
  __ecp_nistz256_mul_montx(&local_d8,auStack_158,local_78);
  uStack_e0 = 0x5ee538;
  uVar10 = __ecp_nistz256_mul_by_2x(local_58);
  uStack_e0 = 0x5ee55b;
  __ecp_nistz256_sqr_montx(uVar10,auStack_138,local_b8[0]);
  uStack_e0 = 0x5ee574;
  __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x5ee590;
  __ecp_nistz256_subx(&local_d8);
  local_d8 = local_c0;
  uStack_e0 = 0x5ee5ce;
  local_d0 = uVar9;
  __ecp_nistz256_mul_montx(&local_d8,auStack_158,local_b8[0]);
  uStack_e0 = 0x5ee5dd;
  __ecp_nistz256_sub_fromx(extraout_XMM1_Qa_02);
  return;
}

