
undefined8 FUN_0062edf0(undefined8 *param_1,undefined8 *param_2,ulong param_3,uint param_4)

{
  short *psVar1;
  uint *puVar2;
  uint uVar3;
  short *psVar4;
  uint *puVar5;
  
  psVar1 = (short *)param_1[1];
  psVar4 = (short *)*param_1;
  if (((((param_4 & 4) != 0) && (2 < (ulong)((long)psVar1 - (long)psVar4))) && (*psVar4 == -0x4411))
     && ((char)psVar4[1] == -0x41)) {
    psVar4 = (short *)((long)psVar4 + 3);
    *param_1 = psVar4;
  }
  if (psVar1 != psVar4) {
    puVar2 = (uint *)param_2[1];
    puVar5 = (uint *)*param_2;
    do {
      if (puVar2 == puVar5) {
        return 1;
      }
      uVar3 = FUN_0062c540(param_1,param_3);
      if (uVar3 == 0xfffffffe) {
        return 1;
      }
      if (param_3 < uVar3) {
        return 2;
      }
      *param_2 = puVar5 + 1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while ((short *)*param_1 != psVar1);
  }
  return 0;
}

