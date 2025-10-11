
void FUN_005552c0(long param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = thunk_FUN_007129d0();
  pcVar2 = "ENCRYPTED";
  if (((param_2 != 10) && (pcVar2 = "MIC-CLEAR", param_2 != 0x1e)) &&
     (pcVar2 = "MIC-ONLY", param_2 != 0x14)) {
    pcVar2 = "BAD-TYPE";
  }
  FUN_004aeb30(param_1 + lVar1,0x400 - lVar1,"Proc-Type: 4,%s\n",pcVar2);
  return;
}

