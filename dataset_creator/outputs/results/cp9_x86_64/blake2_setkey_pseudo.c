
undefined8 blake2_setkey(long param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  if (0x1f < param_3 - 1) {
    ERR_new();
    ERR_set_debug("../providers/implementations/macs/blake2_mac_impl.c",0x5e,"blake2_setkey");
    ERR_set_error(0x39,0x69,0);
    return 0;
  }
  pvVar2 = memcpy((void *)(param_1 + 0xa0),param_2,param_3);
  if (param_3 != 0x20) {
    puVar4 = (undefined8 *)((long)pvVar2 + param_3);
    uVar3 = 0x20 - param_3;
    uVar1 = (uint)uVar3;
    if (uVar1 < 8) {
      if ((uVar3 & 4) == 0) {
        if ((uVar1 != 0) && (*(undefined1 *)puVar4 = 0, (uVar3 & 2) != 0)) {
          *(undefined2 *)((long)puVar4 + ((uVar3 & 0xffffffff) - 2)) = 0;
        }
      }
      else {
        *(undefined4 *)puVar4 = 0;
        *(undefined4 *)((long)puVar4 + ((uVar3 & 0xffffffff) - 4)) = 0;
      }
    }
    else {
      *puVar4 = 0;
      *(undefined8 *)((long)puVar4 + ((uVar3 & 0xffffffff) - 8)) = 0;
      uVar1 = uVar1 + ((int)puVar4 - (int)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) & 0xfffffff8;
      if (7 < uVar1) {
        uVar3 = 0;
        do {
          uVar5 = (int)uVar3 + 8;
          *(undefined8 *)(((ulong)(puVar4 + 1) & 0xfffffffffffffff8) + uVar3) = 0;
          uVar3 = (ulong)uVar5;
        } while (uVar5 < uVar1);
      }
    }
  }
  ossl_blake2s_param_set_key_length(param_1 + 0x80,param_3 & 0xffffffff);
  return 1;
}

