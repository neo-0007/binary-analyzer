
void sn_cmp_BSEARCH_CMP_FN(undefined8 *param_1,uint *param_2)

{
  strcmp(*(char **)*param_1,(&nid_objs)[(ulong)*param_2 * 5]);
  return;
}

