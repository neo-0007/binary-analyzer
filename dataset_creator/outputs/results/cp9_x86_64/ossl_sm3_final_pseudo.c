
undefined8 ossl_sm3_final(uint *param_1,uint *param_2)

{
  uint *ptr;
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  
  ptr = param_2 + 10;
  uVar1 = param_2[0x1a];
  *(undefined1 *)((long)param_2 + (ulong)uVar1 + 0x28) = 0x80;
  uVar2 = (ulong)uVar1 + 1;
  if (uVar2 < 0x39) {
    uVar5 = 0x38 - uVar2;
    puVar3 = (uint *)((long)ptr + uVar2);
  }
  else {
    if (uVar2 != 0x40) {
      uVar5 = 0;
      do {
        *(undefined1 *)((long)((long)ptr + uVar2) + uVar5) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x40 - uVar2);
    }
    ossl_sm3_block_data_order(param_2,ptr,1);
    uVar5 = 0x38;
    puVar3 = ptr;
  }
  uVar1 = (uint)uVar5;
  if (uVar1 < 8) {
    if ((uVar5 & 4) == 0) {
      if ((uVar1 != 0) && (*(undefined1 *)puVar3 = 0, (uVar5 & 2) != 0)) {
        *(undefined2 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *puVar3 = 0;
      *(undefined4 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)((long)puVar3 + ((uVar5 & 0xffffffff) - 8)) = 0;
    uVar1 = uVar1 + ((int)puVar3 - (int)((ulong)(puVar3 + 2) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar1) {
      uVar2 = 0;
      do {
        uVar4 = (int)uVar2 + 8;
        *(undefined8 *)(((ulong)(puVar3 + 2) & 0xfffffffffffffff8) + uVar2) = 0;
        uVar2 = (ulong)uVar4;
      } while (uVar4 < uVar1);
    }
  }
  uVar2 = *(ulong *)(param_2 + 8);
  *(ulong *)(param_2 + 0x18) =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  ossl_sm3_block_data_order(param_2,ptr,1);
  param_2[0x1a] = 0;
  OPENSSL_cleanse(ptr,0x40);
  uVar1 = *param_2;
  *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_2[1];
  param_1[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_2[2];
  param_1[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_2[3];
  param_1[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_2[4];
  param_1[4] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_2[5];
  param_1[5] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_2[6];
  param_1[6] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_2[7];
  param_1[7] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return 1;
}

