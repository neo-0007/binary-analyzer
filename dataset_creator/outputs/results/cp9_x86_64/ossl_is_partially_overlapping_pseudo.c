
bool ossl_is_partially_overlapping(long param_1,long param_2,int param_3)

{
  return ((ulong)-(long)param_3 < (ulong)(param_1 - param_2) ||
         (ulong)(param_1 - param_2) < (ulong)(long)param_3) && (0 < param_3 && param_1 != param_2);
}

