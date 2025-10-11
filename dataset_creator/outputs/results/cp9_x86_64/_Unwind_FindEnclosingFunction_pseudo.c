
long _Unwind_FindEnclosingFunction(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [16];
  long local_18;
  
  lVar1 = _Unwind_Find_FDE(param_1 + -1,auStack_28);
  if (lVar1 != 0) {
    lVar1 = local_18;
  }
  return lVar1;
}

