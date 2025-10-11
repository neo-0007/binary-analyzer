
void FUN_007bff90(uint *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if ((*param_1 & 0x8000) == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar4 + 2) != lVar3) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 007c0030 to 007c0034 has its CatchHandler @ 007c0037 */
        FUN_00709590();
      }
      piVar4 = *(int **)(param_1 + 0x22);
      *(long *)(piVar4 + 2) = lVar3;
    }
    piVar4[1] = piVar4[1] + 1;
  }
                    /* try { // try from 007bffe2 to 007bffe6 has its CatchHandler @ 007c0037 */
  FUN_006fe4a0(param_1,0,0,3);
  uVar2 = *param_1;
  *param_1 = uVar2 & 0xffffffcf;
  if ((uVar2 & 0x8000) == 0) {
    piVar4 = *(int **)(param_1 + 0x22);
    iVar1 = piVar4[1];
    piVar4[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar4[2] = 0;
      piVar4[3] = 0;
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
        return;
      }
    }
  }
  return;
}

