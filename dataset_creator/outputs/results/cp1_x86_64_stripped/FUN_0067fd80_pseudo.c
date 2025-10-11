
long FUN_0067fd80(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_00625ba0(&DAT_00945480);
  plVar1 = (long *)(*(long *)(*param_2 + 0x18) + lVar3 * 8);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    return lVar2;
  }
                    /* try { // try from 0067fdc5 to 0067fdc9 has its CatchHandler @ 0067fe4c */
  puVar4 = (undefined8 *)FUN_006c31f0(0x90);
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_FUN_00933fe8;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined2 *)(puVar4 + 9) = 0;
  *(undefined1 *)(puVar4 + 0x11) = 0;
                    /* try { // try from 0067fe2a to 0067fe2e has its CatchHandler @ 0067fe55 */
  FUN_0067cb60(puVar4,param_2);
  FUN_00626180(*param_2,puVar4,lVar3);
  return *plVar1;
}

