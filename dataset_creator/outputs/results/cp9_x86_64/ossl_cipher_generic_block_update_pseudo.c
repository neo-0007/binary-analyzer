
bool ossl_cipher_generic_block_update
               (long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,ulong param_6)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong local_48;
  long local_40 [2];
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  local_48 = param_6;
  local_40[0] = param_5;
  if (*(int *)(param_1 + 0x40) != 0) {
    if ((((param_5 == 0) || (param_5 != param_2)) || (param_4 < param_6)) ||
       ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
      ERR_new();
      uVar6 = 0x107;
      goto LAB_00483479;
    }
    if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
      uVar8 = uVar1 - param_6 % uVar1;
      uVar3 = param_6 + uVar8;
      if (param_4 < uVar3) {
        ERR_new();
        uVar6 = 0x114;
        goto LAB_00483479;
      }
      if (0x100 < uVar8) {
        ERR_new();
        uVar6 = 0x119;
        goto LAB_00483479;
      }
      uVar5 = (int)uVar8 - 1;
      local_48 = uVar3;
      if (*(int *)(param_1 + 0x40) == 0x300) {
        if (1 < uVar8) {
          uVar8 = uVar8 - 1;
          puVar4 = (undefined8 *)(param_6 + param_2);
          uVar7 = (uint)uVar8;
          if (uVar7 < 8) {
            if ((uVar8 & 4) == 0) {
              if ((uVar7 != 0) && (*(undefined1 *)puVar4 = 0, (uVar8 & 2) != 0)) {
                *(undefined2 *)((long)puVar4 + ((uVar8 & 0xffffffff) - 2)) = 0;
              }
            }
            else {
              *(undefined4 *)puVar4 = 0;
              *(undefined4 *)((long)puVar4 + ((uVar8 & 0xffffffff) - 4)) = 0;
            }
          }
          else {
            *puVar4 = 0;
            *(undefined8 *)((long)puVar4 + ((uVar8 & 0xffffffff) - 8)) = 0;
            uVar8 = (ulong)(((int)puVar4 -
                            (int)(undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) + uVar7
                           >> 3);
            puVar4 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
            for (; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
          }
        }
        *(char *)(param_2 + -1 + uVar3) = (char)uVar5;
      }
      else if (param_6 < uVar3) {
        local_48 = param_6;
        memset((void *)(param_2 + param_6),uVar5 & 0xff,uVar8);
        local_48 = uVar3;
      }
    }
    if (local_48 % uVar1 != 0) {
      ERR_new();
      uVar6 = 0x12a;
LAB_00483479:
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",uVar6,
                    "ossl_cipher_generic_block_update");
      ERR_set_error(0x39,0x66,0);
      return false;
    }
    iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5);
    if (iVar2 == 0) {
      ERR_new();
      uVar6 = 0x131;
    }
    else {
      if (*(int *)(param_1 + 0x50) != 0) {
        CRYPTO_free(*(void **)(param_1 + 0x48));
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      *param_3 = local_48;
      if (((*(byte *)(param_1 + 0x3c) & 2) != 0) ||
         (iVar2 = ossl_cipher_tlsunpadblock
                            (*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x40),param_2
                             ,param_3,uVar1,param_1 + 0x48,param_1 + 0x50,
                             *(undefined8 *)(param_1 + 0x58),0), iVar2 != 0)) {
        return true;
      }
      ERR_new();
      uVar6 = 0x142;
    }
    goto LAB_004836b0;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    param_6 = -uVar1 & param_6;
    uVar3 = 0;
  }
  else {
    param_6 = ossl_cipher_fillblock(param_1 + 0x84,param_1 + 0x30,uVar1,local_40,&local_48);
    uVar3 = *(ulong *)(param_1 + 0x30);
  }
  uVar8 = 0;
  if (uVar3 == uVar1) {
    if ((((*(byte *)(param_1 + 0x3c) & 2) != 0) || (local_48 != 0)) ||
       ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
      if (param_4 < uVar1) {
        ERR_new();
        uVar6 = 0x155;
        goto LAB_00483719;
      }
      iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x84,uVar1);
      if (iVar2 == 0) {
        ERR_new();
        uVar6 = 0x159;
        goto LAB_004836b0;
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      param_2 = param_2 + uVar1;
      uVar8 = uVar1;
      goto LAB_004834d4;
    }
    uVar8 = 0;
    if (param_6 == 0) {
      uVar8 = 0;
      local_48 = 0;
      goto LAB_004834e7;
    }
LAB_0048350b:
    uVar8 = uVar8 + param_6;
    if (param_4 < uVar8) {
LAB_00483708:
      ERR_new();
      uVar6 = 0x16a;
LAB_00483719:
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",uVar6,
                    "ossl_cipher_generic_block_update");
      ERR_set_error(0x39,0x6a,0);
      return false;
    }
LAB_00483517:
    iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,local_40[0],param_6);
    if (iVar2 == 0) {
      ERR_new();
      uVar6 = 0x170;
LAB_004836b0:
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",uVar6,
                    "ossl_cipher_generic_block_update");
      ERR_set_error(0x39,0x66,0);
      return false;
    }
    local_40[0] = local_40[0] + param_6;
    local_48 = local_48 - param_6;
LAB_004834de:
    if (local_48 == 0) goto LAB_004834e7;
  }
  else {
LAB_004834d4:
    if (param_6 == 0) goto LAB_004834de;
    if (((*(byte *)(param_1 + 0x3c) & 3) != 1) || (local_48 != param_6)) goto LAB_0048350b;
    if (param_6 < uVar1) {
      ERR_new();
      uVar6 = 0x163;
      goto LAB_00483719;
    }
    param_6 = param_6 - uVar1;
    uVar8 = uVar8 + param_6;
    if (param_4 < uVar8) goto LAB_00483708;
    if (param_6 != 0) goto LAB_00483517;
  }
  iVar2 = ossl_cipher_trailingdata(param_1 + 0x84,param_1 + 0x30,uVar1,local_40,&local_48);
  if (iVar2 == 0) {
    return false;
  }
LAB_004834e7:
  *param_3 = uVar8;
  return local_48 == 0;
}

