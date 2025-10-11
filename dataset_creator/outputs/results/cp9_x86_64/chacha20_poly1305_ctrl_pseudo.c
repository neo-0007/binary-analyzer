
undefined4 chacha20_poly1305_ctrl(long param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(param_1 + 0x78);
  switch(param_2) {
  case 0:
    if (lVar5 == 0) {
      lVar5 = Poly1305_ctx_size();
      lVar5 = CRYPTO_zalloc(lVar5 + 0xd0,"../crypto/evp/e_chacha20_poly1305.c",0x1f9);
      *(long *)(param_1 + 0x78) = lVar5;
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/e_chacha20_poly1305.c",0x1fb,"chacha20_poly1305_ctrl");
        ERR_set_error(6,0x86,0);
        return param_2;
      }
    }
    *(undefined8 *)(lVar5 + 0xa8) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0xc00000000;
    uVar3 = 1;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
    *(undefined8 *)(lVar5 + 0xb8) = 0;
    *(undefined8 *)(lVar5 + 200) = 0xffffffffffffffff;
    *(undefined1 (*) [16])(lVar5 + 0x94) = (undefined1  [16])0x0;
    break;
  default:
    uVar3 = 0xffffffff;
    break;
  case 8:
    if (lVar5 == 0) {
      return 1;
    }
    lVar4 = Poly1305_ctx_size();
    lVar5 = CRYPTO_memdup(lVar5,lVar4 + 0xd0,"../crypto/evp/e_chacha20_poly1305.c",0x20d);
    param_4[0xf] = lVar5;
    if (lVar5 != 0) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("../crypto/evp/e_chacha20_poly1305.c",0x20f,"chacha20_poly1305_ctrl");
    ERR_set_error(6,0xad,0);
    return 0;
  case 9:
    if (0xb < param_3 - 1) {
      return 0;
    }
    *(uint *)(lVar5 + 0xc4) = param_3;
    uVar3 = 1;
    break;
  case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    puVar1 = (undefined4 *)(lVar5 + 0x84);
    if (7 < param_3) {
      *param_4 = *(undefined8 *)(lVar5 + 0x84);
      *(undefined8 *)((long)param_4 + ((ulong)param_3 - 8)) =
           *(undefined8 *)(lVar5 + 0x7c + (ulong)param_3);
      lVar5 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
      uVar6 = (int)lVar5 + param_3 & 0xfffffff8;
      if (uVar6 < 8) {
        return 1;
      }
      uVar7 = 0;
      do {
        uVar9 = (ulong)uVar7;
        uVar7 = uVar7 + 8;
        *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar9) =
             *(undefined8 *)((long)puVar1 + (uVar9 - lVar5));
      } while (uVar7 < uVar6);
      return 1;
    }
    if ((param_3 & 4) == 0) {
      if (param_3 == 0) {
        return 1;
      }
      *(undefined1 *)param_4 = *(undefined1 *)puVar1;
      if ((param_3 & 2) == 0) {
        return 1;
      }
      *(undefined2 *)((long)param_4 + ((ulong)param_3 - 2)) =
           *(undefined2 *)(lVar5 + 0x82 + (ulong)param_3);
      return 1;
    }
    *(undefined4 *)param_4 = *puVar1;
    *(undefined4 *)((long)param_4 + ((ulong)param_3 - 4)) =
         *(undefined4 *)(lVar5 + 0x80 + (ulong)param_3);
    return 1;
  case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (param_4 == (undefined8 *)0x0) {
      return 1;
    }
    puVar1 = (undefined4 *)(lVar5 + 0x84);
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) && (*(undefined1 *)puVar1 = *(undefined1 *)param_4, (param_3 & 2) != 0))
        {
          *(undefined2 *)(lVar5 + 0x82 + (ulong)param_3) =
               *(undefined2 *)((long)param_4 + ((ulong)param_3 - 2));
        }
      }
      else {
        *puVar1 = *(undefined4 *)param_4;
        *(undefined4 *)(lVar5 + 0x80 + (ulong)param_3) =
             *(undefined4 *)((long)param_4 + ((ulong)param_3 - 4));
      }
    }
    else {
      uVar9 = lVar5 + 0x8cU & 0xfffffffffffffff8;
      *(undefined8 *)(lVar5 + 0x84) = *param_4;
      *(undefined8 *)(lVar5 + 0x7c + (ulong)param_3) =
           *(undefined8 *)((long)param_4 + ((ulong)param_3 - 8));
      lVar4 = (long)puVar1 - uVar9;
      uVar6 = (int)lVar4 + param_3 & 0xfffffff8;
      if (7 < uVar6) {
        uVar7 = 0;
        do {
          uVar8 = (ulong)uVar7;
          uVar7 = uVar7 + 8;
          *(undefined8 *)(uVar9 + uVar8) = *(undefined8 *)((long)param_4 + (uVar8 - lVar4));
        } while (uVar7 < uVar6);
      }
    }
    *(uint *)(lVar5 + 0xc0) = param_3;
    uVar3 = 1;
    break;
  case 0x12:
    if (param_3 != 0xc) {
      return 0;
    }
    uVar3 = *(undefined4 *)param_4;
    *(undefined4 *)(lVar5 + 0x24) = uVar3;
    *(undefined4 *)(lVar5 + 0x78) = uVar3;
    uVar3 = *(undefined4 *)((long)param_4 + 4);
    *(undefined4 *)(lVar5 + 0x28) = uVar3;
    *(undefined4 *)(lVar5 + 0x7c) = uVar3;
    uVar3 = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(lVar5 + 0x2c) = uVar3;
    *(undefined4 *)(lVar5 + 0x80) = uVar3;
    uVar3 = 1;
    break;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    *(undefined8 *)(lVar5 + 0x94) = *param_4;
    *(undefined4 *)(lVar5 + 0x9c) = *(undefined4 *)(param_4 + 1);
    *(undefined1 *)(lVar5 + 0xa0) = *(undefined1 *)((long)param_4 + 0xc);
    uVar2 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
    uVar6 = (uint)uVar2;
    if (*(int *)(param_1 + 0x10) == 0) {
      if (uVar2 < 0x10) {
        return 0;
      }
      uVar6 = uVar2 - 0x10;
      *(ushort *)(lVar5 + 0x9f) = (ushort)uVar6 << 8 | (ushort)uVar6 >> 8;
    }
    *(undefined4 *)(lVar5 + 0xbc) = 0;
    *(ulong *)(lVar5 + 200) = (ulong)uVar6;
    *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(lVar5 + 0x78);
    *(ulong *)(lVar5 + 0x28) = *(ulong *)(lVar5 + 0x7c) ^ *(ulong *)(lVar5 + 0x94);
    uVar3 = 0x10;
    break;
  case 0x17:
    return 1;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar5 + 0xc4);
    return 1;
  }
  return uVar3;
}

