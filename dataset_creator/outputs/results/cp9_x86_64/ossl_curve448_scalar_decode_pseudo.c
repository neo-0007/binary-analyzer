
uint ossl_curve448_scalar_decode(ulong *param_1,long param_2)

{
  byte *pbVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  
  uVar5 = 0;
  puVar8 = param_1;
  do {
    uVar7 = 0;
    uVar3 = 0;
    if (uVar5 != 0x38) {
      do {
        pbVar1 = (byte *)(param_2 + uVar5);
        cVar2 = (char)uVar3;
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 | (ulong)*pbVar1 << (cVar2 * '\b' & 0x3fU);
        if (7 < uVar3) break;
      } while (uVar5 < 0x38);
    }
    *puVar8 = uVar7;
    puVar8 = puVar8 + 1;
    if (param_1 + 7 == puVar8) {
      uVar3 = 0;
      lVar6 = 0;
      uVar5 = 0x2378c292ab5844f3;
      lVar4 = 0;
      while( true ) {
        uVar3 = (lVar6 + (ulong)CARRY8(uVar3,*(ulong *)((long)param_1 + lVar4))) -
                (ulong)(uVar3 + *(ulong *)((long)param_1 + lVar4) < uVar5);
        lVar6 = (long)uVar3 >> 0x3f;
        if (lVar4 + 8 == 0x38) break;
        uVar5 = *(ulong *)(sc_p + lVar4 + 8);
        lVar4 = lVar4 + 8;
      }
      ossl_curve448_scalar_mul(param_1,param_1,ossl_curve448_scalar_one);
      return ~(uint)((long)((uVar3 & 0xffffffff) - 1) >> 0x3f);
    }
  } while( true );
}

