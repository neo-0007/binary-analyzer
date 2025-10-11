
undefined8 FUN_0047a970(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  plVar1 = *(long **)(param_1 + 0xf8);
  uVar3 = FUN_00485290(*(undefined8 *)(param_1 + 8));
  iVar2 = FUN_0043c6f0(plVar1 + 1,param_2,uVar3);
  if (iVar2 != 0) {
    lVar4 = FUN_0043c7e0(plVar1 + 1);
    if ((lVar4 != 0) && (uVar5 = FUN_0040ac60(lVar4), (uVar5 & 2) != 0)) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg_hmac.c",0x175,"drbg_hmac_set_ctx_params"
                  );
      FUN_0051f8f0(0x39,0xb7,0);
      return 0;
    }
    iVar2 = FUN_0043caf0(plVar1,param_2,0,0,0,uVar3);
    if (iVar2 != 0) {
      if (*plVar1 != 0) {
        iVar2 = FUN_0040ac10(lVar4);
        uVar5 = (ulong)iVar2;
        plVar1[4] = uVar5;
        *(ulong *)(param_1 + 0xe8) = uVar5;
        uVar6 = (int)(uVar5 >> 3) << 6;
        if (0x100 < uVar6) {
          uVar6 = 0x100;
        }
        *(uint *)(param_1 + 0x80) = uVar6;
        *(ulong *)(param_1 + 0x90) = (ulong)(uVar6 >> 3);
        *(ulong *)(param_1 + 0xa0) = (ulong)(uVar6 >> 4);
      }
      uVar3 = FUN_005b3b70(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}

