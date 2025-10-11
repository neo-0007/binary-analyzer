
/* WARNING: Type propagation algorithm not settling */

void FUN_005f81a0(long param_1,ulong *param_2)

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
  
  if ((DAT_0094b5a0 & 0x80100) != 0x80100) {
    puVar5 = &local_d8;
    local_78 = *param_2;
    puStack_70 = (undefined1 *)param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    lVar11 = param_1 + 0x40;
    uStack_e0 = 0x5f821e;
    puVar6 = param_2;
    FUN_005f8140(param_1,param_1 + 0x20,lVar11,&local_d8);
    uStack_e0 = 0x5f823c;
    FUN_005f7540(local_98,puVar6 + 8);
    uStack_e0 = 0x5f825c;
    FUN_005f7540(&local_d8,&local_d8);
    uStack_e0 = 0x5f8282;
    FUN_005f7280(lVar11,param_2 + 8);
    uStack_e0 = 0x5f8287;
    FUN_005f8140();
    uStack_e0 = 0x5f82aa;
    FUN_005f8040(local_b8);
    puVar4 = puStack_70;
    uVar9 = local_78;
    uStack_e0 = 0x5f82cd;
    FUN_005f80a0(local_98);
    uStack_e0 = 0x5f82ee;
    puVar6 = extraout_XMM1_Qa;
    FUN_005f7540();
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
    uStack_e0 = 0x5f8399;
    FUN_005f7280(local_b8,local_b8);
    uStack_e0 = 0x5f83a6;
    FUN_005f8140(local_58);
    uStack_e0 = 0x5f83b5;
    FUN_005f8040(local_b8);
    uStack_e0 = 0x5f83df;
    FUN_005f7280(&local_d8,&local_d8);
    uStack_e0 = 0x5f83ec;
    uVar10 = FUN_005f8140(local_58);
    uStack_e0 = 0x5f840f;
    FUN_005f7540(uVar10,local_b8);
    uStack_e0 = 0x5f8428;
    FUN_005f80a0();
    uStack_e0 = 0x5f8444;
    FUN_005f8100(&local_d8);
    local_d8 = local_c0;
    uStack_e0 = 0x5f8481;
    local_d0 = uVar9;
    FUN_005f7280(&local_d8,&local_d8);
    uStack_e0 = 0x5f8490;
    FUN_005f80a0(extraout_XMM1_Qa_00);
    return;
  }
  local_78 = *param_2;
  puStack_70 = (undefined1 *)param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  lVar11 = param_1 + 0x40;
  uStack_e0 = 0x5f9367;
  puVar6 = param_2;
  FUN_005f92a0(param_1,param_1 + 0x20,lVar11,&local_d8);
  uStack_e0 = 0x5f9385;
  FUN_005f7960(local_98,puVar6 + -8,puVar6[8]);
  uStack_e0 = 0x5f93a6;
  FUN_005f7960(&local_d8,auStack_158,local_d8);
  uStack_e0 = 0x5f93cc;
  FUN_005f7700(lVar11,param_2 + -8,param_2[4]);
  uStack_e0 = 0x5f93d1;
  FUN_005f92a0();
  uStack_e0 = 0x5f93f4;
  FUN_005f9180(local_b8);
  puVar4 = puStack_70;
  uVar9 = local_78;
  uStack_e0 = 0x5f9417;
  FUN_005f91e0(local_98);
  puVar7 = auStack_158;
  uStack_e0 = 0x5f9439;
  puVar6 = extraout_XMM1_Qa_01;
  FUN_005f7960(extraout_XMM1_Qa_01,puVar7,local_d8);
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
  uStack_e0 = 0x5f94e4;
  FUN_005f7700(local_b8,auStack_138,local_98[0],uVar2 << 0x3f,local_c8,local_b8[0]);
  uStack_e0 = 0x5f94f1;
  FUN_005f92a0(local_58);
  uStack_e0 = 0x5f9500;
  FUN_005f9180(local_b8);
  uStack_e0 = 0x5f952b;
  FUN_005f7700(&local_d8,auStack_158,local_78);
  uStack_e0 = 0x5f9538;
  uVar10 = FUN_005f92a0(local_58);
  uStack_e0 = 0x5f955b;
  FUN_005f7960(uVar10,auStack_138,local_b8[0]);
  uStack_e0 = 0x5f9574;
  FUN_005f91e0();
  uStack_e0 = 0x5f9590;
  FUN_005f9240(&local_d8);
  local_d8 = local_c0;
  uStack_e0 = 0x5f95ce;
  local_d0 = uVar9;
  FUN_005f7700(&local_d8,auStack_158,local_b8[0]);
  uStack_e0 = 0x5f95dd;
  FUN_005f91e0(extraout_XMM1_Qa_02);
  return;
}

