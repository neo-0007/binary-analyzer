
undefined1  [16] _x86_64_AES_set_encrypt_key(ulong *param_1,int param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 auVar9 [16];
  
  if ((param_1 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) {
    uVar3 = 0xffffffffffffffff;
  }
  else if (param_2 == 0x80) {
    uVar4 = *param_1;
    uVar5 = param_1[1];
    *param_3 = uVar4;
    param_3[1] = uVar5;
    uVar5 = uVar5 >> 0x20;
    uVar2 = 0;
    puVar8 = param_3;
    while( true ) {
      param_3 = (ulong *)(uVar5 >> 0x10);
      uVar1 = (uint)uVar4 ^ (uint)*(byte *)((long)&DAT_00489500 + (uVar5 & 0xff)) << 0x18 ^
              (uint)*(byte *)((long)&DAT_00489500 + (uVar5 >> 8 & 0xff)) ^
              (uint)*(byte *)((long)&DAT_00489500 + ((ulong)param_3 & 0xff)) << 8 ^
              (uint)*(byte *)((long)&DAT_00489500 + (uVar5 >> 0x18)) << 0x10 ^
              (&DAT_00489900)[uVar2];
      *(uint *)(puVar8 + 2) = uVar1;
      uVar1 = uVar1 ^ *(uint *)((long)puVar8 + 4);
      *(uint *)((long)puVar8 + 0x14) = uVar1;
      uVar1 = uVar1 ^ (uint)puVar8[1];
      *(uint *)(puVar8 + 3) = uVar1;
      *(uint *)((long)puVar8 + 0x1c) = uVar1 ^ *(uint *)((long)puVar8 + 0xc);
      uVar2 = uVar2 + 1;
      if (9 < (int)uVar2) break;
      uVar4 = (ulong)(uint)puVar8[2];
      uVar5 = (ulong)*(uint *)((long)puVar8 + 0x1c);
      puVar8 = puVar8 + 2;
    }
    *(uint *)(puVar8 + 0xc) = 10;
    uVar3 = 0;
  }
  else if (param_2 == 0xc0) {
    uVar4 = *param_1;
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    *param_3 = uVar4;
    param_3[1] = uVar5;
    param_3[2] = uVar6;
    uVar6 = uVar6 >> 0x20;
    uVar2 = 0;
    puVar8 = param_3;
    while( true ) {
      param_3 = (ulong *)(uVar6 >> 0x10);
      uVar1 = (uint)uVar4 ^ (uint)*(byte *)((long)&DAT_00489500 + (uVar6 & 0xff)) << 0x18 ^
              (uint)*(byte *)((long)&DAT_00489500 + (uVar6 >> 8 & 0xff)) ^
              (uint)*(byte *)((long)&DAT_00489500 + ((ulong)param_3 & 0xff)) << 8 ^
              (uint)*(byte *)((long)&DAT_00489500 + (uVar6 >> 0x18)) << 0x10 ^
              (&DAT_00489900)[uVar2];
      *(uint *)(puVar8 + 3) = uVar1;
      uVar1 = uVar1 ^ *(uint *)((long)puVar8 + 4);
      *(uint *)((long)puVar8 + 0x1c) = uVar1;
      uVar1 = uVar1 ^ (uint)puVar8[1];
      *(uint *)(puVar8 + 4) = uVar1;
      uVar1 = uVar1 ^ *(uint *)((long)puVar8 + 0xc);
      *(uint *)((long)puVar8 + 0x24) = uVar1;
      if (uVar2 == 7) break;
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 ^ (uint)puVar8[2];
      *(uint *)(puVar8 + 5) = uVar1;
      *(uint *)((long)puVar8 + 0x2c) = uVar1 ^ *(uint *)((long)puVar8 + 0x14);
      uVar4 = (ulong)(uint)puVar8[3];
      uVar6 = (ulong)*(uint *)((long)puVar8 + 0x2c);
      puVar8 = puVar8 + 3;
    }
    *(uint *)(puVar8 + 9) = 0xc;
    uVar3 = 0;
  }
  else if (param_2 == 0x100) {
    uVar4 = *param_1;
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    uVar7 = param_1[3];
    *param_3 = uVar4;
    param_3[1] = uVar5;
    param_3[2] = uVar6;
    param_3[3] = uVar7;
    uVar7 = uVar7 >> 0x20;
    uVar5 = 0;
    puVar8 = param_3;
    while( true ) {
      param_3 = (ulong *)(uVar7 >> 0x10);
      uVar2 = (uint)uVar4 ^ (uint)*(byte *)((long)&DAT_00489500 + (uVar7 & 0xff)) << 0x18 ^
              (uint)*(byte *)((long)&DAT_00489500 + (uVar7 >> 8 & 0xff)) ^
              (uint)*(byte *)((long)&DAT_00489500 + ((ulong)param_3 & 0xff)) << 8 ^
              (uint)*(byte *)((long)&DAT_00489500 + (uVar7 >> 0x18)) << 0x10 ^
              (&DAT_00489900)[uVar5];
      *(uint *)(puVar8 + 4) = uVar2;
      uVar2 = uVar2 ^ *(uint *)((long)puVar8 + 4);
      *(uint *)((long)puVar8 + 0x24) = uVar2;
      uVar2 = uVar2 ^ (uint)puVar8[1];
      *(uint *)(puVar8 + 5) = uVar2;
      uVar2 = uVar2 ^ *(uint *)((long)puVar8 + 0xc);
      *(uint *)((long)puVar8 + 0x2c) = uVar2;
      if ((int)uVar5 == 6) break;
      uVar5 = (ulong)((int)uVar5 + 1);
      uVar2 = (uint)puVar8[2] ^ (uint)*(byte *)((long)&DAT_00489500 + (ulong)(uVar2 & 0xff)) ^
              (uint)*(byte *)((long)&DAT_00489500 + (ulong)(uVar2 >> 8 & 0xff)) << 8 ^
              (uint)*(byte *)((long)&DAT_00489500 + (ulong)(uVar2 >> 0x10 & 0xff)) << 0x10 ^
              (uint)*(byte *)((long)&DAT_00489500 + (ulong)(uVar2 >> 0x18)) << 0x18;
      *(uint *)(puVar8 + 6) = uVar2;
      uVar2 = uVar2 ^ *(uint *)((long)puVar8 + 0x14);
      *(uint *)((long)puVar8 + 0x34) = uVar2;
      uVar2 = uVar2 ^ (uint)puVar8[3];
      *(uint *)(puVar8 + 7) = uVar2;
      *(uint *)((long)puVar8 + 0x3c) = uVar2 ^ *(uint *)((long)puVar8 + 0x1c);
      uVar4 = (ulong)(uint)puVar8[4];
      uVar7 = (ulong)*(uint *)((long)puVar8 + 0x3c);
      puVar8 = puVar8 + 4;
    }
    *(uint *)(puVar8 + 6) = 0xe;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffffffffffe;
    param_3 = (ulong *)(ulong)DAT_004895e0;
  }
  auVar9._8_8_ = param_3;
  auVar9._0_8_ = uVar3;
  return auVar9;
}

