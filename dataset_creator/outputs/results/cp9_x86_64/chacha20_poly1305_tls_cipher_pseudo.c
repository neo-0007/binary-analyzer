
ulong chacha20_poly1305_tls_cipher(long param_1,undefined8 *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *a;
  long in_FS_OFFSET;
  undefined8 *local_188;
  size_t local_178;
  undefined1 local_168 [48];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [29];
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x78);
  uVar3 = *(ulong *)(lVar2 + 200);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar3 + 0x10 == param_4) {
    *(undefined4 *)(lVar2 + 0x20) = 0;
    lVar1 = lVar2 + 0xd0;
    if (uVar3 < 0xc1) {
      local_178 = uVar3 + 0x7f & 0xffffffffffffffc0;
      ChaCha20_ctr32(local_168,zero,local_178,lVar2);
      Poly1305_Init(lVar1,local_168);
      local_138 = *(undefined8 *)(lVar2 + 0x94);
      uStack_130 = *(undefined8 *)(lVar2 + 0x9c);
      *(undefined4 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(ulong *)(lVar2 + 0xb0) = uVar3;
      if (uVar3 == 0) {
        lVar7 = 0x20;
        puVar6 = local_128;
        a = &local_138;
        local_188 = param_2;
      }
      else {
        if (*(int *)(param_1 + 0x10) == 0) {
          puVar6 = (undefined8 *)xor128_decrypt_n_pad();
        }
        else {
          puVar6 = (undefined8 *)xor128_encrypt_n_pad(param_2,param_3,local_128,uVar3);
        }
        a = &local_138;
        local_188 = (undefined8 *)((long)param_2 + uVar3);
        param_3 = (void *)((long)param_3 + uVar3);
        lVar7 = (long)puVar6 + (0x10 - (long)a);
      }
    }
    else {
      ChaCha20_ctr32(local_168,zero,0x40,lVar2);
      Poly1305_Init(lVar1,local_168);
      *(undefined4 *)(lVar2 + 0x20) = 1;
      *(undefined4 *)(lVar2 + 0x70) = 0;
      Poly1305_Update(lVar1,lVar2 + 0x94,0x10);
      iVar5 = *(int *)(param_1 + 0x10);
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(ulong *)(lVar2 + 0xb0) = uVar3;
      if (iVar5 == 0) {
        Poly1305_Update(lVar1,param_3,uVar3);
        ChaCha20_ctr32(param_2,param_3,uVar3,lVar2,lVar2 + 0x20);
      }
      else {
        ChaCha20_ctr32(param_2,param_3,uVar3,lVar2);
        Poly1305_Update(lVar1,param_2,uVar3);
      }
      local_188 = (undefined8 *)((long)param_2 + uVar3);
      param_3 = (void *)((long)param_3 + uVar3);
      Poly1305_Update(lVar1,zero,-(int)uVar3 & 0xf);
      puVar6 = local_128;
      lVar7 = 0x10;
      local_178 = 0x40;
      a = puVar6;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0xb0);
    *puVar6 = *(undefined8 *)(lVar2 + 0xa8);
    puVar6[1] = uVar4;
    Poly1305_Update(lVar1,a,lVar7);
    OPENSSL_cleanse(local_168,local_178);
    puVar6 = a;
    if (*(int *)(param_1 + 0x10) != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x84);
    }
    Poly1305_Final(lVar1,puVar6);
    iVar5 = *(int *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 200) = 0xffffffffffffffff;
    if (iVar5 == 0) {
      iVar5 = CRYPTO_memcmp(a,param_3,0x10);
      if (iVar5 != 0) {
        memset((void *)((long)local_188 + (0x10 - param_4)),0,param_4 - 0x10);
        param_4 = 0xffffffff;
        goto LAB_00521ae0;
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x8c);
      *local_188 = *(undefined8 *)(lVar2 + 0x84);
      local_188[1] = uVar4;
    }
    param_4 = param_4 & 0xffffffff;
  }
  else {
    param_4 = 0xffffffff;
  }
LAB_00521ae0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

