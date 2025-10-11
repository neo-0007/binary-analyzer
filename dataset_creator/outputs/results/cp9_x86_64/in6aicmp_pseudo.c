
void in6aicmp(long param_1,long param_2)

{
  bcmp((void *)(param_1 + 8),(void *)(param_2 + 8),0x10);
  return;
}

