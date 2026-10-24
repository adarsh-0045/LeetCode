class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> daysInMonth={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        auto dateToDayOfYear=[&](const string& s) {
            int month=stoi(s.substr(0, 2));
            int day=stoi(s.substr(3, 2));
            int dayOfYear=day;
            for (int i=0;i<month-1;++i) {
                dayOfYear+=daysInMonth[i];
            }
            return dayOfYear;
        };
        int aliceStart=dateToDayOfYear(arriveAlice);
        int aliceEnd=dateToDayOfYear(leaveAlice);
        int bobStart=dateToDayOfYear(arriveBob);
        int bobEnd=dateToDayOfYear(leaveBob);
        int overlapStart=max(aliceStart, bobStart);
        int overlapEnd=min(aliceEnd, bobEnd);
        return max(0,overlapEnd-overlapStart+1);
    }
};