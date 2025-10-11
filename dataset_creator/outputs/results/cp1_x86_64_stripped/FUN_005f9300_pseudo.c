
/* WARNING: Type propagation algorithm not settling */

void FUN_005f9300(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong unaff_RBP;
  ulong *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  long lVar10;
  undefined1 local_158 [32];
  undefined1 local_138 [88];
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
  
  local_78 = *param_2;
  puStack_70 = (undefined1 *)param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  lVar10 = param_1 + 0x40;
  uStack_e0 = 0x5f9367;
  puVar5 = param_2;
  FUN_005f92a0(param_1,param_1 + 0x20,lVar10,&local_d8);
  uStack_e0 = 0x5f9385;
  FUN_005f7960(local_98,puVar5 + -8,puVar5[8]);
  uStack_e0 = 0x5f93a6;
  FUN_005f7960(&local_d8,local_158,local_d8);
  uStack_e0 = 0x5f93cc;
  FUN_005f7700(lVar10,param_2 + -8,param_2[4]);
  uStack_e0 = 0x5f93d1;
  FUN_005f92a0();
  uStack_e0 = 0x5f93f4;
  FUN_005f9180(local_b8);
  puVar4 = puStack_70;
  uVar8 = local_78;
  uStack_e0 = 0x5f9417;
  FUN_005f91e0(local_98);
  puVar6 = local_158;
  uStack_e0 = 0x5f9439;
  puVar5 = extraout_XMM1_Qa;
  FUN_005f7960(extraout_XMM1_Qa,puVar6,local_d8);
  uVar1 = (ulong)(CARRY8((ulong)puVar4,(ulong)puVar6) ||
                 CARRY8((ulong)(puVar4 + (long)puVar6),(ulong)(uVar8 != 0)));
  uVar2 = (ulong)CARRY8(local_d0,uVar1);
  uVar7 = (ulong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
  uVar1 = local_d0 + uVar1;
  uVar3 = uVar8 - 1;
  puVar6 = puVar4 + (long)puVar6 + (uVar8 != 0);
  uVar2 = local_c8 + unaff_RBP + uVar2;
  if ((uVar8 & 1) == 0) {
    uVar7 = 0;
    uVar1 = local_d0;
    uVar3 = uVar8;
    puVar6 = puVar4;
    uVar2 = local_c8;
  }
  uVar8 = (ulong)puVar6 >> 1 | uVar1 << 0x3f;
  *puVar5 = uVar3 >> 1 | (long)puVar6 << 0x3f;
  puVar5[1] = uVar8;
  puVar5[2] = uVar1 >> 1 | uVar2 << 0x3f;
  puVar5[3] = uVar2 >> 1 | uVar7 << 0x3f;
  uStack_e0 = 0x5f94e4;
  FUN_005f7700(local_b8,local_138,local_98[0],uVar2 << 0x3f,local_c8,local_b8[0]);
  uStack_e0 = 0x5f94f1;
  FUN_005f92a0(local_58);
  uStack_e0 = 0x5f9500;
  FUN_005f9180(local_b8);
  uStack_e0 = 0x5f952b;
  FUN_005f7700(&local_d8,local_158,local_78);
  uStack_e0 = 0x5f9538;
  uVar9 = FUN_005f92a0(local_58);
  uStack_e0 = 0x5f955b;
  FUN_005f7960(uVar9,local_138,local_b8[0]);
  uStack_e0 = 0x5f9574;
  FUN_005f91e0();
  uStack_e0 = 0x5f9590;
  FUN_005f9240(&local_d8);
  local_d8 = local_c0;
  uStack_e0 = 0x5f95ce;
  local_d0 = uVar8;
  FUN_005f7700(&local_d8,local_158,local_b8[0]);
  uStack_e0 = 0x5f95dd;
  FUN_005f91e0(extraout_XMM1_Qa_00);
  return;
}

