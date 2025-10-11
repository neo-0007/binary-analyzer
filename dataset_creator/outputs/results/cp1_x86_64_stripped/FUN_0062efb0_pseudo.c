
int FUN_0062efb0(undefined8 *param_1,long *param_2,ulong param_3,uint param_4,int param_5)

{
  short *psVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  ushort uVar7;
  short *psVar8;
  
  psVar1 = (short *)param_1[1];
  psVar8 = (short *)*param_1;
  if (((((param_4 & 4) != 0) && (2 < (ulong)((long)psVar1 - (long)psVar8))) && (*psVar8 == -0x4411))
     && ((char)psVar8[1] == -0x41)) {
    psVar8 = (short *)((long)psVar8 + 3);
    *param_1 = psVar8;
  }
  if (psVar8 != psVar1) {
    puVar2 = (ushort *)param_2[1];
    do {
      while( true ) {
        puVar3 = (ushort *)*param_2;
        if (puVar3 == puVar2) {
          return 0;
        }
        uVar6 = FUN_0062c540(param_1,param_3);
        if ((uint)uVar6 == 0xfffffffe) {
          return param_5 + 1;
        }
        if (param_3 < (uVar6 & 0xffffffff)) {
          return 2;
        }
        uVar4 = (ushort)uVar6;
        if ((uint)uVar6 < 0x10000) break;
        if ((ulong)((long)puVar2 - (long)puVar3) < 3) {
          *param_1 = psVar8;
          param_1[1] = psVar1;
          return 1;
        }
        uVar5 = (uVar4 & 0x3ff) + 0xdc00;
        uVar7 = (short)(uVar6 >> 10) + 0xd7c0;
        if ((param_4 & 1) == 0) {
          uVar7 = uVar7 * 0x100 | uVar7 >> 8;
          uVar5 = (uVar4 & 0x3ff) << 8 | uVar5 >> 8;
        }
        psVar8 = (short *)*param_1;
        *puVar3 = uVar7;
        *param_2 = (long)(puVar3 + 2);
        puVar3[1] = uVar5;
        if (psVar8 == psVar1) {
          return 0;
        }
      }
      psVar8 = (short *)*param_1;
      if ((param_4 & 1) == 0) {
        uVar4 = uVar4 << 8 | uVar4 >> 8;
      }
      *param_2 = (long)(puVar3 + 1);
      *puVar3 = uVar4;
    } while (psVar8 != psVar1);
  }
  return 0;
}

