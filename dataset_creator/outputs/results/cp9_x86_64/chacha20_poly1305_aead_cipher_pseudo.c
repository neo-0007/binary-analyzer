
undefined8
chacha20_poly1305_aead_cipher
          (long param_1,undefined8 *param_2,ulong *param_3,void *param_4,ulong param_5)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  size_t len;
  undefined8 uVar15;
  long in_FS_OFFSET;
  undefined1 local_e8 [48];
  undefined8 local_b8;
  undefined8 uStack_b0;
  byte local_a8 [104];
  long local_40;
  
  lVar1 = param_1 + 0x1f8;
  uVar14 = *(ulong *)(param_1 + 0x348);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0x330) & 2) == 0) {
    if ((uVar14 != 0xffffffffffffffff) && (param_2 != (undefined8 *)0x0)) {
      uVar15 = 0;
      if (uVar14 + 0x10 != param_5) goto LAB_00448bff;
      if (uVar14 < 0x41) {
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        ChaCha20_ctr32(local_e8,zero,0x80);
        Poly1305_Init(lVar1,local_e8);
        local_b8 = *(undefined8 *)(param_1 + 0x30c);
        uStack_b0 = *(undefined8 *)(param_1 + 0x314);
        uVar7 = 0;
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        *(undefined8 *)(param_1 + 800) = 0xd;
        *(ulong *)(param_1 + 0x328) = uVar14;
        if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
          pbVar8 = local_a8;
          lVar10 = 0x20;
          pbVar13 = pbVar8;
          if (uVar14 != 0) {
            do {
              bVar9 = *(byte *)((long)param_4 + uVar7);
              bVar3 = pbVar8[uVar7];
              pbVar8[uVar7] = bVar9;
              *(byte *)((long)param_2 + uVar7) = bVar3 ^ bVar9;
              uVar7 = uVar7 + 1;
            } while (uVar14 != uVar7);
LAB_004491af:
            param_4 = (void *)((long)param_4 + uVar14);
            param_2 = (undefined8 *)((long)param_2 + uVar14);
            uVar7 = (ulong)(-(int)uVar14 & 0xf);
            pbVar8 = local_a8 + uVar14 + uVar7;
            lVar10 = uVar14 + uVar7 + 0x20;
            pbVar13 = local_a8 + uVar14;
          }
        }
        else {
          if (uVar14 != 0) {
            do {
              pbVar8 = local_a8 + uVar7;
              bVar9 = *pbVar8 ^ *(byte *)((long)param_4 + uVar7);
              *(byte *)((long)param_2 + uVar7) = bVar9;
              uVar7 = uVar7 + 1;
              *pbVar8 = bVar9;
            } while (uVar14 != uVar7);
            goto LAB_004491af;
          }
          pbVar8 = local_a8;
          lVar10 = 0x20;
          pbVar13 = pbVar8;
        }
        uVar11 = (uint)uVar7;
        if (uVar11 < 8) {
          if ((uVar7 & 4) == 0) {
            if ((uVar11 != 0) && (*pbVar13 = 0, (uVar7 & 2) != 0)) {
              (pbVar13 + (uVar7 - 2))[0] = 0;
              (pbVar13 + (uVar7 - 2))[1] = 0;
            }
          }
          else {
            pbVar13[0] = 0;
            pbVar13[1] = 0;
            pbVar13[2] = 0;
            pbVar13[3] = 0;
            pbVar13 = pbVar13 + (uVar7 - 4);
            pbVar13[0] = 0;
            pbVar13[1] = 0;
            pbVar13[2] = 0;
            pbVar13[3] = 0;
          }
        }
        else {
          pbVar13[0] = 0;
          pbVar13[1] = 0;
          pbVar13[2] = 0;
          pbVar13[3] = 0;
          pbVar13[4] = 0;
          pbVar13[5] = 0;
          pbVar13[6] = 0;
          pbVar13[7] = 0;
          pbVar2 = pbVar13 + (uVar7 - 8);
          pbVar2[0] = 0;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          uVar11 = uVar11 + ((int)pbVar13 - (int)((ulong)(pbVar13 + 8) & 0xfffffffffffffff8)) &
                   0xfffffff8;
          if (7 < uVar11) {
            uVar6 = 0;
            do {
              uVar14 = (ulong)uVar6;
              uVar6 = uVar6 + 8;
              *(undefined8 *)(((ulong)(pbVar13 + 8) & 0xfffffffffffffff8) + uVar14) = 0;
            } while (uVar6 < uVar11);
          }
        }
        pbVar13 = (byte *)&local_b8;
        len = 0x80;
      }
      else {
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        ChaCha20_ctr32(local_e8,zero,0x40);
        Poly1305_Init(lVar1,local_e8);
        *(undefined4 *)(param_1 + 0x1a0) = 1;
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        Poly1305_Update(lVar1,param_1 + 0x30c,0x10);
        *(undefined8 *)(param_1 + 800) = 0xd;
        *(ulong *)(param_1 + 0x328) = uVar14;
        if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
          Poly1305_Update(lVar1,param_4,uVar14);
          ChaCha20_ctr32(param_2,param_4,uVar14,param_1 + 0x180,param_1 + 0x1a0);
        }
        else {
          ChaCha20_ctr32(param_2,param_4,uVar14);
          Poly1305_Update(lVar1,param_2,uVar14);
        }
        param_4 = (void *)((long)param_4 + uVar14);
        param_2 = (undefined8 *)((long)param_2 + uVar14);
        Poly1305_Update(lVar1,zero,-(int)uVar14 & 0xf);
        pbVar8 = local_a8;
        lVar10 = 0x10;
        len = 0x40;
        pbVar13 = pbVar8;
      }
      uVar15 = *(undefined8 *)(param_1 + 0x328);
      *(undefined8 *)pbVar8 = *(undefined8 *)(param_1 + 800);
      *(undefined8 *)(pbVar8 + 8) = uVar15;
      Poly1305_Update(lVar1,pbVar13,lVar10);
      OPENSSL_cleanse(local_e8,len);
      pbVar8 = (byte *)(param_1 + 0x2fc);
      if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
        pbVar8 = pbVar13;
      }
      Poly1305_Final(lVar1,pbVar8);
      *(undefined8 *)(param_1 + 0x348) = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
        iVar5 = CRYPTO_memcmp(pbVar13,param_4,0x10);
        if (iVar5 != 0) {
          uVar15 = 0;
          if (0x10 < param_5) {
            memset((void *)((long)param_2 + (0x10 - param_5)),0,param_5 - 0x10);
          }
          goto LAB_00448bff;
        }
        param_5 = param_5 - 0x10;
      }
      else {
        uVar15 = *(undefined8 *)(param_1 + 0x304);
        *param_2 = *(undefined8 *)(param_1 + 0x2fc);
        param_2[1] = uVar15;
      }
      uVar15 = 1;
      *param_3 = param_5;
      goto LAB_00448bff;
    }
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    ChaCha20_ctr32(param_1 + 0x1b0,zero,0x40,param_1 + 0x180,param_1 + 0x1a0);
    Poly1305_Init(lVar1,param_1 + 0x1b0);
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 2;
    *(undefined4 *)(param_1 + 0x1a0) = 1;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    if (uVar14 != 0xffffffffffffffff) {
      Poly1305_Update(lVar1,param_1 + 0x30c,0xd);
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 1;
      *(undefined8 *)(param_1 + 800) = 0xd;
    }
  }
  if (param_4 == (void *)0x0) {
    bVar4 = false;
    param_4 = (void *)0x0;
LAB_00448db5:
    if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
      if ((*(ulong *)(param_1 + 800) & 0xf) != 0) {
        Poly1305_Update(lVar1,zero,0x10 - (ulong)((uint)*(ulong *)(param_1 + 800) & 0xf));
      }
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfe;
    }
    if ((*(ulong *)(param_1 + 0x328) & 0xf) != 0) {
      Poly1305_Update(lVar1,zero,0x10 - (ulong)((uint)*(ulong *)(param_1 + 0x328) & 0xf));
    }
    Poly1305_Update(lVar1,param_1 + 800,0x10);
    puVar12 = (undefined1 *)(param_1 + 0x2fc);
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      puVar12 = local_e8;
    }
    Poly1305_Final(lVar1,puVar12);
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfd;
    if (bVar4) {
      if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
        iVar5 = CRYPTO_memcmp(local_e8,param_4,0x10);
        param_5 = param_5 - 0x10;
        if (iVar5 != 0) {
          memset((void *)((long)param_2 - uVar14),0,uVar14);
          goto LAB_00448d2d;
        }
      }
      else {
        uVar15 = *(undefined8 *)(param_1 + 0x304);
        *param_2 = *(undefined8 *)(param_1 + 0x2fc);
        param_2[1] = uVar15;
      }
    }
    else if (((*(byte *)(param_1 + 0x3c) & 2) == 0) &&
            (iVar5 = CRYPTO_memcmp(local_e8,(undefined1 *)(param_1 + 0x2fc),
                                   *(size_t *)(param_1 + 0x338)), iVar5 != 0)) {
LAB_00448d2d:
      uVar15 = 0;
      param_5 = 0;
      goto LAB_00448e5b;
    }
    uVar15 = 1;
  }
  else if (param_2 == (undefined8 *)0x0) {
    Poly1305_Update(lVar1,param_4,param_5);
    uVar15 = 1;
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 1;
    *(long *)(param_1 + 800) = *(long *)(param_1 + 800) + param_5;
  }
  else {
    if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
      if ((*(ulong *)(param_1 + 800) & 0xf) != 0) {
        Poly1305_Update(lVar1,zero,0x10 - (ulong)((uint)*(ulong *)(param_1 + 800) & 0xf));
      }
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfe;
    }
    *(undefined8 *)(param_1 + 0x348) = 0xffffffffffffffff;
    uVar7 = param_5;
    if ((uVar14 != 0xffffffffffffffff) && (uVar7 = uVar14, uVar14 + 0x10 != param_5))
    goto LAB_00448d2d;
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      Poly1305_Update(lVar1,param_4,uVar7);
      (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0xc0,param_2,param_4,uVar7);
      lVar10 = *(long *)(param_1 + 0x328);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0xc0,param_2,param_4,uVar7);
      Poly1305_Update(lVar1,param_2,uVar7);
      lVar10 = *(long *)(param_1 + 0x328);
    }
    *(ulong *)(param_1 + 0x328) = lVar10 + uVar7;
    uVar15 = 1;
    if (uVar7 != param_5) {
      bVar4 = true;
      param_4 = (void *)((long)param_4 + uVar7);
      param_2 = (undefined8 *)((long)param_2 + uVar7);
      uVar14 = uVar7;
      goto LAB_00448db5;
    }
  }
LAB_00448e5b:
  *param_3 = param_5;
LAB_00448bff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

