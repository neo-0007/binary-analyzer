
ulong chacha20_poly1305_cipher(long param_1,undefined8 *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  bool bVar6;
  undefined1 *puVar7;
  size_t sVar8;
  size_t __n;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x78);
  __n = *(size_t *)(lVar1 + 200);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(lVar1 + 0xbc) == 0) {
    bVar6 = __n != 0xffffffffffffffff && param_2 != (undefined8 *)0x0;
    if (bVar6) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = chacha20_poly1305_tls_cipher(param_1,param_2,param_3,param_4);
        return uVar5;
      }
      goto LAB_005220b0;
    }
    *(undefined4 *)(lVar1 + 0x20) = 0;
    ChaCha20_ctr32(lVar1 + 0x30,zero,0x40,lVar1,lVar1 + 0x20);
    Poly1305_Init(lVar1 + 0xd0,lVar1 + 0x30);
    *(undefined4 *)(lVar1 + 0x20) = 1;
    *(undefined4 *)(lVar1 + 0x70) = 0;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined4 *)(lVar1 + 0xbc) = 1;
    if (__n == 0xffffffffffffffff) goto LAB_00521d4b;
    Poly1305_Update(lVar1 + 0xd0,lVar1 + 0x94,0xd);
    *(undefined8 *)(lVar1 + 0xa8) = 0xd;
    *(undefined4 *)(lVar1 + 0xb8) = 1;
    if (param_3 == (void *)0x0) goto LAB_00521f04;
LAB_00521d54:
    if (param_2 != (undefined8 *)0x0) {
      if (*(int *)(lVar1 + 0xb8) != 0) {
        if ((*(ulong *)(lVar1 + 0xa8) & 0xf) != 0) {
          Poly1305_Update(lVar1 + 0xd0,zero,0x10 - (ulong)((uint)*(ulong *)(lVar1 + 0xa8) & 0xf));
        }
        *(undefined4 *)(lVar1 + 0xb8) = 0;
      }
      *(undefined8 *)(lVar1 + 200) = 0xffffffffffffffff;
      sVar8 = param_4;
      if ((__n != 0xffffffffffffffff) && (sVar8 = __n, __n + 0x10 != param_4)) goto LAB_00521f7b;
      if (*(int *)(param_1 + 0x10) == 0) {
        Poly1305_Update(lVar1 + 0xd0,param_3,sVar8);
        chacha_cipher(param_1,param_2,param_3,sVar8);
        *(size_t *)(lVar1 + 0xb0) = *(long *)(lVar1 + 0xb0) + sVar8;
      }
      else {
        chacha_cipher(param_1,param_2,param_3,sVar8);
        Poly1305_Update(lVar1 + 0xd0,param_2,sVar8);
        *(size_t *)(lVar1 + 0xb0) = *(long *)(lVar1 + 0xb0) + sVar8;
      }
      if (sVar8 != param_4) {
        bVar6 = true;
        param_3 = (void *)((long)param_3 + sVar8);
        param_2 = (undefined8 *)((long)param_2 + sVar8);
        __n = sVar8;
        if (*(int *)(lVar1 + 0xb8) == 0) goto LAB_00521e3a;
        goto LAB_00521f04;
      }
      goto LAB_00521df4;
    }
    Poly1305_Update(lVar1 + 0xd0,param_3,param_4);
    *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + param_4;
    *(undefined4 *)(lVar1 + 0xb8) = 1;
  }
  else {
LAB_00521d4b:
    if (param_3 != (void *)0x0) goto LAB_00521d54;
    bVar6 = false;
    if (*(int *)(lVar1 + 0xb8) == 0) {
LAB_00521e3a:
      uVar5 = *(ulong *)(lVar1 + 0xb0);
      uVar3 = (uint)uVar5;
    }
    else {
LAB_00521f04:
      if ((*(ulong *)(lVar1 + 0xa8) & 0xf) != 0) {
        Poly1305_Update(lVar1 + 0xd0,zero,0x10 - (ulong)((uint)*(ulong *)(lVar1 + 0xa8) & 0xf));
      }
      uVar5 = *(ulong *)(lVar1 + 0xb0);
      *(undefined4 *)(lVar1 + 0xb8) = 0;
      uVar3 = (uint)uVar5;
    }
    if ((uVar5 & 0xf) != 0) {
      Poly1305_Update(lVar1 + 0xd0,zero,0x10 - (ulong)(uVar3 & 0xf));
    }
    Poly1305_Update(lVar1 + 0xd0,lVar1 + 0xa8,0x10);
    puVar7 = local_58;
    if (*(int *)(param_1 + 0x10) != 0) {
      puVar7 = (undefined1 *)(lVar1 + 0x84);
    }
    Poly1305_Final(lVar1 + 0xd0,puVar7);
    *(undefined4 *)(lVar1 + 0xbc) = 0;
    if (bVar6) {
      if (*(int *)(param_1 + 0x10) == 0) {
        iVar4 = CRYPTO_memcmp(local_58,param_3,0x10);
        if (iVar4 != 0) {
          memset((void *)((long)param_2 - __n),0,__n);
          goto LAB_00521f7b;
        }
      }
      else {
        uVar2 = *(undefined8 *)(lVar1 + 0x8c);
        *param_2 = *(undefined8 *)(lVar1 + 0x84);
        param_2[1] = uVar2;
      }
    }
    else if ((*(int *)(param_1 + 0x10) == 0) &&
            (iVar4 = CRYPTO_memcmp(local_58,(void *)(lVar1 + 0x84),(long)*(int *)(lVar1 + 0xc0)),
            iVar4 != 0)) {
LAB_00521f7b:
      param_4 = 0xffffffff;
      goto LAB_00521df8;
    }
LAB_00521df4:
    param_4 = param_4 & 0xffffffff;
  }
LAB_00521df8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
LAB_005220b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

