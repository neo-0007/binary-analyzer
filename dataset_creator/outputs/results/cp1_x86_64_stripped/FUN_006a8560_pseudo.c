
long FUN_006a8560(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_00625ba0(&DAT_00945540);
  plVar1 = (long *)(*(long *)(*param_2 + 0x18) + lVar3 * 8);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    return lVar2;
  }
                    /* try { // try from 006a85a5 to 006a85a9 has its CatchHandler @ 006a862e */
  puVar4 = (undefined8 *)FUN_006c31f0(0x150);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_FUN_00934008;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined1 *)(puVar4 + 0x29) = 0;
                    /* try { // try from 006a860c to 006a8610 has its CatchHandler @ 006a8637 */
  FUN_006a52e0(puVar4,param_2);
  FUN_00626180(*param_2,puVar4,lVar3);
  return *plVar1;
}

