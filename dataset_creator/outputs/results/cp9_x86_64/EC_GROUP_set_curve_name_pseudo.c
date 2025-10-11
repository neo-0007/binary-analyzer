
void EC_GROUP_set_curve_name(EC_GROUP *group,int nid)

{
  *(int *)(group + 0x20) = nid;
  *(uint *)(group + 0x24) = (uint)(nid != 0);
  return;
}

