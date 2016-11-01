ZigZag问题是将给定的字符串按锯齿状(W型)排列成n行。

思路：<br />
排列成锯齿状之后，对于同一行的字符而言，相邻三个字母的原下标差的和等于step = 2*numRows-2;<br />
比如第 i 行中，记第二个字符的原下标与第一个字符原下标的差为s_i_down，第三个字符的原下标与第二个字符原下标的差为s_i_up,<br />
s_i_down + s_i_up = step; 且 <br />
s_i_down = step - 2 * i;<br />

具体步骤：<br />
声明一个等大小的new_string，按照上面的思路将old_string的下标与new_string的下标进行对应。<br />

第i行的第一个字母的下标一定是i，下一个（下行）字母的下标由s_i_down计算而得，再下一个由s_i_up计算而得，以此类推；<br />
对于第0行与最后一行，直接由step计算下一个坐标。<br />


发现：<br />
?操作符用时25ms<br />
index += flag ? step_i : (step - step_i);<br />
if操作符用时12ms<br />
if (flag) {<br />
    index += step_i;<br />
} else {<br />
    index += (step - step_i);<br />
}<br />
