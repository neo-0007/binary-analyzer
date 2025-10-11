
bool ctr_update(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7)

{
  uchar *key;
  undefined1 (*pauVar1) [16];
  uchar *key_00;
  byte bVar2;
  undefined8 *puVar3;
  size_t __n;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_f8;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uchar local_a8 [8];
  undefined8 auStack_a0 [5];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  puVar3 = *(undefined8 **)(param_1 + 0xf8);
  local_d8 = *(undefined8 *)((long)puVar3 + 0x54);
  uStack_d0 = *(undefined8 *)((long)puVar3 + 0x5c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = 0x10;
  uVar4 = 1;
  pbVar7 = (byte *)((long)puVar3 + 99);
  do {
    bVar2 = *pbVar7;
    pbVar9 = pbVar7 + -1;
    *pbVar7 = (byte)(uVar4 + bVar2);
    uVar4 = uVar4 + bVar2 >> 8;
    pbVar7 = pbVar9;
  } while ((byte *)((long)puVar3 + 0x53) != pbVar9);
  local_c8 = *(undefined8 *)((long)puVar3 + 0x54);
  uStack_c0 = *(undefined8 *)((long)puVar3 + 0x5c);
  iVar6 = 0x20;
  if (puVar3[5] != 0x10) {
    uVar4 = 1;
    pbVar7 = (byte *)((long)puVar3 + 99);
    do {
      bVar2 = *pbVar7;
      pbVar9 = pbVar7 + -1;
      *pbVar7 = (byte)(uVar4 + bVar2);
      uVar4 = uVar4 + bVar2 >> 8;
      pbVar7 = pbVar9;
    } while ((byte *)((long)puVar3 + 0x53) != pbVar9);
    local_b8 = *(undefined8 *)((long)puVar3 + 0x54);
    uStack_b0 = *(undefined8 *)((long)puVar3 + 0x5c);
    iVar6 = 0x30;
  }
  iVar5 = EVP_CipherUpdate((EVP_CIPHER_CTX *)*puVar3,local_a8,&local_e0,(uchar *)&local_d8,iVar6);
  if ((iVar5 == 0) || (local_e0 != iVar6)) goto LAB_0047711d;
  __n = puVar3[5];
  key = (uchar *)((long)puVar3 + 0x34);
  memcpy(key,local_a8,__n);
  uVar8 = *(undefined8 *)((long)auStack_a0 + __n);
  *(undefined8 *)((long)puVar3 + 0x54) = *(undefined8 *)(local_a8 + __n);
  *(undefined8 *)((long)puVar3 + 0x5c) = uVar8;
  if (*(int *)(puVar3 + 6) == 0) {
    ctr_XOR(puVar3,param_2,param_3);
    ctr_XOR(puVar3,param_4,param_5);
LAB_0047743d:
    iVar6 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)*puVar3,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,
                              (uchar *)0x0,-1);
    if (iVar6 != 0) {
      iVar6 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)puVar3[1],(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,
                                (uchar *)0x0,-1);
      bVar11 = iVar6 != 0;
      goto LAB_0047711f;
    }
  }
  else {
    if ((param_6 == 0 && param_4 == 0) && param_2 == 0) {
LAB_004773fd:
      if (param_3 != 0) {
        ctr_XOR(puVar3,puVar3 + 0x10,*(undefined8 *)(param_1 + 0xe8));
      }
      goto LAB_0047743d;
    }
    key_00 = (uchar *)(puVar3 + 0x10);
    local_dc = 0x10;
    uVar8 = 0x20;
    if (__n != 0x10) {
      uVar8 = 0x30;
    }
    *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar3 + 0x14) = (undefined1  [16])0x0;
    local_68._4_12_ = SUB1612((undefined1  [16])0x0,4);
    local_68._0_4_ = 0x1000000;
    local_58._4_12_ = SUB1612((undefined1  [16])0x0,4);
    local_58._0_4_ = 0x2000000;
    local_78 = (undefined1  [16])0x0;
    iVar6 = ctr_BCC_block(puVar3,key_00,local_78,uVar8);
    if (iVar6 != 0) {
      lVar10 = param_3;
      if (param_2 == 0) {
        lVar10 = 0;
      }
      uVar4 = (uint)lVar10;
      if (param_6 == 0) {
        param_7 = 0;
      }
      else {
        uVar4 = uVar4 + (int)param_7;
      }
      if (param_4 == 0) {
        local_f8 = 0;
      }
      else {
        uVar4 = uVar4 + (int)param_5;
        local_f8 = param_5;
      }
      *(uint *)((long)puVar3 + 100) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      *(undefined2 *)(puVar3 + 0xd) = 0;
      *(undefined1 *)((long)puVar3 + 0x6a) = 0;
      puVar3[0xf] = 8;
      *(char *)((long)puVar3 + 0x6b) = *(char *)(puVar3 + 5) + '\x10';
      if ((((param_2 == 0 || param_3 == 0) ||
           (iVar6 = ctr_BCC_update_part_0(puVar3,param_2), iVar6 != 0)) &&
          ((param_6 == 0 ||
           ((param_7 == 0 || (iVar6 = ctr_BCC_update_part_0(puVar3,param_6,param_7), iVar6 != 0)))))
          ) && (((param_4 == 0 ||
                 ((local_f8 == 0 ||
                  (iVar6 = ctr_BCC_update_part_0(puVar3,param_4,local_f8), iVar6 != 0)))) &&
                (iVar6 = ctr_BCC_update_part_0(puVar3,&c80_1,1), iVar6 != 0)))) {
        lVar10 = puVar3[0xf];
        if (lVar10 != 0) {
          memset((void *)((long)puVar3 + lVar10 + 100),0,0x10 - lVar10);
          pauVar1 = (undefined1 (*) [16])((long)puVar3 + 100);
          local_68 = *pauVar1;
          local_78 = *pauVar1;
          iVar6 = 2;
          if (puVar3[5] != 0x10) {
            iVar6 = 3;
            local_58._0_16_ = *pauVar1;
          }
          iVar6 = ctr_BCC_block(puVar3,key_00,local_78,iVar6 << 4);
          if (iVar6 == 0) goto LAB_0047711d;
        }
        iVar6 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)*puVar3,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key_00,
                                  (uchar *)0x0,-1);
        if (iVar6 != 0) {
          iVar6 = EVP_CipherUpdate((EVP_CIPHER_CTX *)*puVar3,key_00,&local_dc,key_00 + puVar3[5],
                                   0x10);
          if ((iVar6 != 0) && (local_dc == 0x10)) {
            iVar6 = EVP_CipherUpdate((EVP_CIPHER_CTX *)*puVar3,(uchar *)(puVar3 + 0x12),&local_dc,
                                     key_00,0x10);
            if (((iVar6 != 0) && (local_dc == 0x10)) &&
               ((puVar3[5] == 0x10 ||
                ((iVar6 = EVP_CipherUpdate((EVP_CIPHER_CTX *)*puVar3,(uchar *)(puVar3 + 0x14),
                                           &local_dc,(uchar *)(puVar3 + 0x12),0x10), iVar6 != 0 &&
                 (local_dc == 0x10)))))) goto LAB_004773fd;
          }
        }
      }
    }
  }
LAB_0047711d:
  bVar11 = false;
LAB_0047711f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar11;
}

